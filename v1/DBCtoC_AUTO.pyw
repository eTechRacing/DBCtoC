import sys
import os
import re
import tkinter as tk
from tkinter import filedialog


# Obrir una finestra per seleccionar el fitxer
root = tk.Tk()
root.withdraw()  # Amaga la finestra principal
file_path = filedialog.askopenfilename(title="Selecciona un fitxer DBC", filetypes=[("DBC files", "*.dbc"), ("Tots els fitxers", "*.*")])

if not file_path:
    sys.exit("No s'ha seleccionat cap fitxer.")  # Si no s'escull cap fitxer, sortir

file_name = os.path.splitext(file_path)[0]
file_name_without_extension = os.path.basename(os.path.splitext(file_name)[0])

messages = []
message_pattern = re.compile(r"^BO_\s*(\d+)\s+(\w+):\s*(\d+)")
signal_pattern = re.compile(r"^\s*SG_\s+(\w+)\s*\w?\w?\w?\s*:\s*(\d+)\|(\d+)@(\d+)([+-])\s*\(([+-])?(\d+)(\.\d+)?,([+-])?(\d+)(\.\d+)?\)\s*\[[+-]*\d+\.*\d*\|[+-]*\d+\.*\d*]\s+\"(.*?)\"")
blank_pattern = re.compile(r"^\s*$")
current_message = None

with open(file_path, "r") as file:
    for line in file:
        message_match = message_pattern.match(line)
        if message_match:
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
            signal = {
                "name": signal_match.group(1),
                "start_bit": signal_match.group(2),
                "length": signal_match.group(3),
                "byte_order": signal_match.group(4),
                "value_type": signal_match.group(5),
                "factor_sing": signal_match.group(6),
                "factor": signal_match.group(7),
                "factor_decimal": signal_match.group(8),
                "offset_sing": signal_match.group(9),
                "offset": signal_match.group(10),
                "offset_decimal": signal_match.group(11),
                "unit": signal_match.group(12),
            }
            current_message['signals'].append({key: (value if value is not None else "") for key, value in signal.items()})

        blank_match = blank_pattern.match(line)
        if blank_match and current_message:
            messages.append(current_message)
            current_message = None

# Crear i desar el fitxer header
header_file = f"{file_name}.h"
with open(header_file, "w") as file:
    file.write(f"#ifndef INC_{file_name_without_extension.upper()}_H_\n")
    file.write(f"#define INC_{file_name_without_extension.upper()}_H_\n\n")
    file.write("#include \"main.h\"\n\n")

    for message in messages:
        for signal in message['signals']:
            if signal['value_type'] == "+":
                type_prefix = "uint"
            else:
                type_prefix = "int"

            length = int(signal['length'])
            if length > 32:
                type_size = "64_t"
            elif length > 16:
                type_size = "32_t"
            elif length > 8:
                type_size = "16_t"
            else:
                type_size = "8_t"

            file.write(f"extern {type_prefix}{type_size} {signal['name']};\n")

    # Funcions TX
    file.write("\n// TX Functions\n")
    for message in messages:
        file.write(f"void message_cantx_{message['name']}(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);\n")

    # Funcions RX
    file.write("\n// RX Functions\n")
    for message in messages:
        file.write(f"void message_canrx_{message['name']}(uint8_t *RxData);\n")

    file.write(f"\n#endif /* INC_{file_name_without_extension.upper()}_H_ */")

print("Fitxer header creat correctament")

# Crear i desar el fitxer source
source_file = f"{file_name}.c"
with open(source_file, "w") as file:
    file.write(f"#include \"{file_name_without_extension}.h\"\n\n")

    # Variables
    file.write("// Variables\n")
    for message in messages:
        for signal in message['signals']:
            if signal['value_type'] == "+":
                type_prefix = "uint"
            else:
                type_prefix = "int"

            length = int(signal['length'])
            if length > 32:
                type_size = "64_t"
            elif length > 16:
                type_size = "32_t"
            elif length > 8:
                type_size = "16_t"
            else:
                type_size = "8_t"

            file.write(f"{type_prefix}{type_size} {signal['name']};\n")

    # Funcions TX
    file.write("\n// TX Functions\n")
    for message in messages:
        file.write(f"void message_cantx_{message['name']}(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {{\n")
        file.write(f"   TxHeader.DLC = {message['dlc']};\n")
        file.write(f"   TxHeader.StdId = {message['id']};\n")
        file.write(f"   TxHeader.IDE = 0;\n   TxHeader.RTR = 0;\n   TxHeader.TransmitGlobalTime = DISABLE;\n")
        file.write("   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}\n}\n")

    # Funcions RX
    file.write("\n// RX Functions\n")
    for message in messages:
        file.write(f"void message_canrx_{message['name']}(uint8_t *RxData) {{\n   // Implementació de la recepció\n}}\n")

print("Fitxer source creat correctament")
