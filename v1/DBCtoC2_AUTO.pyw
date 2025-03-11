import os
import re
from tkinter import Tk, filedialog, messagebox

# Amaga la finestra principal de Tkinter
Tk().withdraw()

# Obre un diàleg per seleccionar el fitxer .dbc
file_path = filedialog.askopenfilename(title="Selecciona un fitxer DBC", filetypes=[("DBC files", "*.dbc")])

if not file_path:
    print("No s'ha seleccionat cap fitxer.")
    exit()

file_name = os.path.splitext(file_path)[0]
file_name_without_extension = os.path.basename(os.path.splitext(file_name)[0])

messages = []
message_pattern = re.compile(r"^BO_\s*(\d+)\s+(\w+):\s*(\d+)")
signal_pattern = re.compile(r"^\s*SG_\s+(\w+)\s*\w?\w?\w?\s*:\s*(\d+)\|(\d+)@(\d+)([+-])\s*\(([+-])?(\d+)(\.\d+)?,([+-])?(\d+)(\.\d+)?\)\s*\[[+-]*\d+\.*\d*\|[+-]*\d+\.*\d*]\s+\"(.*?)\"")
blank_pattern = re.compile(r"^\s*$")
current_message = None
count = 0

with open(file_path, "r") as file:
    for line in file:
        message_match = message_pattern.match(line)
        if message_match:
            if count > 1:
                messages.append(current_message)
                current_message = None
            message_id = message_match.group(1)
            message_name = message_match.group(2)
            message_dlc = message_match.group(3)
            current_message = {
                "id": message_id,
                "name": message_name,
                "dlc": message_dlc,
                "signals": []
            }

        signal_match = signal_pattern.match(line)
        if signal_match:
            count = 0
            signal_name = signal_match.group(1)
            start_bit = signal_match.group(2)
            length = signal_match.group(3)
            byte_order = signal_match.group(4)
            value_type = signal_match.group(5)
            factor_sing = signal_match.group(6)
            factor = signal_match.group(7)
            factor_decimal = signal_match.group(8)
            offset_sing = signal_match.group(9)
            offset = signal_match.group(10)
            offset_decimal = signal_match.group(11)
            unit = signal_match.group(12)
            signal = {
                "name": signal_name,
                "start_bit": start_bit,
                "length": length,
                "byte_order": byte_order,
                "value_type": value_type,
                "factor_sing": factor_sing,
                "factor": factor,
                "factor_decimal": factor_decimal,
                "offset_sing": offset_sing,
                "offset": offset,
                "offset_decimal": offset_decimal,
                "unit": unit,
            }

            current_message['signals'].append({key: (value if value is not None else "") for key, value in signal.items()})

        blank_match = blank_pattern.match(line)
        if blank_match and current_message:
            count += 1

# Demanar on guardar el fitxer .h
output_folder_h = filedialog.askdirectory(title="Selecciona la carpeta on guardar el fitxer .h")
if not output_folder_h:
    print("No s'ha seleccionat cap carpeta per al fitxer .h.")
    exit()

# Crear i desar el fitxer header
header_file = os.path.join(output_folder_h, f"{file_name_without_extension}.h")
with open(header_file, "w") as file:
    file.write(f"#ifndef INC_{file_name_without_extension.upper()}_H_\n")
    file.write(f"#define INC_{file_name_without_extension.upper()}_H_\n\n")
    file.write("#include \"main.h\"\n\n")
    
    # Variables globals
    file.write("// Variables globals\n")
    file.write("extern CAN_TxHeaderTypeDef TxHeader;\n")
    file.write("extern uint32_t TxMailbox;\n")
    file.write("extern uint8_t TxData[8];\n\n")
    
    file.write("//Variables----------------------------------------------------------------------------------------------\n")
    file.write("\n")
    for message in messages:
        for signal in message['signals']:
            if signal['value_type'] == "+":
                if int(signal['length']) > 32:
                    file.write(f"extern uint64_t {signal['name']};\n")
                if int(signal['length']) > 16:
                    file.write(f"extern uint32_t {signal['name']};\n")
                elif int(signal['length']) > 8:
                    file.write(f"extern uint16_t {signal['name']};\n")
                else:
                    file.write(f"extern uint8_t {signal['name']};\n")
            else:
                if int(signal['length']) > 32:
                    file.write(f"extern int64_t {signal['name']};\n")
                if int(signal['length']) > 16:
                    file.write(f"extern int32_t {signal['name']};\n")
                elif int(signal['length']) > 8:
                    file.write(f"extern int16_t {signal['name']};\n")
                else:
                    file.write(f"extern int8_t {signal['name']};\n")
    file.write("\n")
    # TX functions headers
    file.write("//TX-----------------------------------------------------------------------------------------------------\n")
    file.write("\n")
    for message in messages:
        file.write(f"void message_cantx_{message['name']}(CAN_HandleTypeDef hcan);\n")
    file.write("\n")
    # RX functions headers
    file.write("//RX-----------------------------------------------------------------------------------------------------\n")
    file.write("\n")
    for message in messages:
        file.write(f"void message_canrx_{message['name']}(uint8_t *RxData);\n")
    file.write("\n")
    file.write(f"#endif /* INC_{file_name_without_extension.upper()}_H_ */")

print(f"Fitxer header creat correctament a: {header_file}")

# Demanar on guardar el fitxer .c
output_folder_c = filedialog.askdirectory(title="Selecciona la carpeta on guardar el fitxer .c")
if not output_folder_c:
    print("No s'ha seleccionat cap carpeta per al fitxer .c.")
    exit()

# Crear i desar el fitxer source
source_file = os.path.join(output_folder_c, f"{file_name_without_extension}.c")
with open(source_file, "w") as file:
    file.write(f"#include \"{file_name_without_extension}.h\"\n")
    file.write("\n")
    file.write("// Variables globals\n")
    file.write("CAN_TxHeaderTypeDef TxHeader = {0};\n")
    file.write("uint32_t TxMailbox = 0;\n")
    file.write("uint8_t TxData[8] = {0};\n\n")
    
    file.write("//Variables----------------------------------------------------------------------------------------------\n")
    file.write("\n")
    for message in messages:
        for signal in message['signals']:
            if signal['value_type'] == "+":
                if int(signal['length']) > 32:
                    file.write(f"uint64_t {signal['name']};\n")
                if int(signal['length']) > 16:
                    file.write(f"uint32_t {signal['name']};\n")
                elif int(signal['length']) > 8:
                    file.write(f"uint16_t {signal['name']};\n")
                else:
                    file.write(f"uint8_t {signal['name']};\n")
            else:
                if int(signal['length']) > 32:
                    file.write(f"int64_t {signal['name']};\n")
                if int(signal['length']) > 16:
                    file.write(f"int32_t {signal['name']};\n")
                elif int(signal['length']) > 8:
                    file.write(f"int16_t {signal['name']};\n")
                else:
                    file.write(f"int8_t {signal['name']};\n")
    file.write("\n")
    file.write("//Tx functions-------------------------------------------------------------------------------------------\n")
    file.write("\n")
    for message in messages:
        # TX functions
        file.write(f"void message_cantx_{message['name']}(CAN_HandleTypeDef hcan) {{\n")
        file.write(f"   TxHeader.DLC = {message['dlc']};\n")
        file.write(f"   TxHeader.IDE = 0;\n")
        file.write(f"   TxHeader.RTR = 0;\n")
        file.write(f"   TxHeader.StdId = {message['id']};\n")
        file.write("   TxHeader.TransmitGlobalTime = DISABLE;\n")
        # Signals
        counter = 0
        shifter = 0
        mask = 0
        origin = 0
        length_byte_1 = 0
        last_shift = 0
        for signal in message['signals']:
            origin = int(signal['start_bit']) - ((int(signal['start_bit']) // 8) * 8)
            length_byte_1 = min(origin + 1, int(signal['length']))
            init_byte = int(signal['start_bit']) // 8
            mask = 0
            shifter = 0
            counter = 0
            for i in range(length_byte_1):
                mask += (1 << i)
            mask = mask << origin+1 - length_byte_1
            file.write(f"   TxData[{init_byte}] = (TxData[{init_byte}] & ~{mask}) | ((({signal['name']} >> {int(signal['length'])-length_byte_1}) << {int(origin+1-length_byte_1)}) & {mask});\n")
            if (int(signal['length'])-length_byte_1) > 7:
                for i in range((int(signal['length']) - length_byte_1)//8):
                    init_byte += 1
                    counter += 1
                    shifter += 8
                    file.write(f"   TxData[{init_byte}] = {signal['name']} >> {int(signal['length'])-length_byte_1 - shifter};\n")
            if (int(signal['length'])-length_byte_1-(counter*8)) > 0:
                last_shift = 8-(int(signal['length'])-length_byte_1-(counter*8))
                mask = 0
                for i in range(int(signal['length'])-length_byte_1-(counter*8)):
                    mask += (1 << i)
                mask = mask << last_shift
                init_byte += 1
                file.write(f"   TxData[{init_byte}] = (TxData[{init_byte}] & ~{mask}) | (({signal['name']} << {last_shift}) & {mask}); \n")
        file.write("   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);\n")
        file.write("}\n")
        file.write("\n")
    # RX functions
    file.write("//Rx functions-------------------------------------------------------------------------------------------")

    for message in messages:
        file.write("\n\n")
        file.write(f"void message_canrx_{message['name']}(uint8_t *RxData) {{\n")
        for signal in message['signals']:

            origin_rx = int(signal['start_bit']) - ((int(signal['start_bit']) // 8) * 8)
            length_byte_1_rx = min(origin_rx + 1, int(signal['length']))
            init_byte_rx = int(signal['start_bit']) // 8
            mask_rx = 0
            shifter_rx = 0
            counter_rx = 0
            if int(signal['length']) > length_byte_1_rx:
                for i in range(length_byte_1_rx):
                    mask_rx += (1 << i)
                mask_rx = mask_rx << origin_rx+1 - length_byte_1_rx
                file.write(f"   {signal['name']} = ((RxData[{init_byte_rx}] & {mask_rx}) << {int(signal['length']) - length_byte_1_rx})")
            else:
                for i in range(length_byte_1_rx):
                    mask_rx += (1 << i)
                mask_rx = mask_rx << origin_rx+1 - length_byte_1_rx
                file.write(f"   {signal['name']} = ((RxData[{init_byte_rx}] & {mask_rx}) >> {origin_rx + 1 - length_byte_1_rx})")
            if (int(signal['length']) - length_byte_1_rx) > 7:
                for i in range((int(signal['length']) - length_byte_1_rx) // 8):
                    init_byte_rx += 1
                    shifter_rx += 8
                    counter_rx += 1
                    file.write(f" | (RxData[{init_byte_rx}] << {int(signal['length']) - length_byte_1_rx-shifter_rx})")
            if (int(signal['length']) - length_byte_1_rx - (counter_rx * 8)) > 0:
                last_shift_rx = 8-(int(signal['length'])-length_byte_1_rx-(counter_rx*8))
                mask_rx = 0
                for i in range(int(signal['length'])-length_byte_1_rx-(counter_rx*8)):
                    mask_rx += (1 << i)
                mask_rx = mask_rx << last_shift_rx
                init_byte_rx += 1
                file.write(f" | ((RxData[{init_byte_rx}] & {mask_rx}) >> {last_shift_rx})")

            file.write(f";")
            file.write(f"   // Signal: {signal['name']}")
            file.write(f" Start Bit: {signal['start_bit']}, Length: {signal['length']}")
            file.write(f" Byte Order: {signal['byte_order']}, Value Type: {signal['value_type']}")
            file.write(f" Factor: {signal['factor_sing']}")
            file.write(f"{signal['factor']}")
            file.write(f"{signal['factor_decimal']}")
            file.write(f" Offset: {signal['offset_sing']}{signal['offset']}{signal['offset_decimal']}")
            file.write(f" Unit: {signal['unit']}\n")
        file.write("}")


print(f"Fitxer source creat correctament a: {source_file}")

# Mostrar missatge d'èxit
messagebox.showinfo("Èxit", f"Els fitxers s'han guardat correctament a:\n- .h: {output_folder_h}\n- .c: {output_folder_c}")