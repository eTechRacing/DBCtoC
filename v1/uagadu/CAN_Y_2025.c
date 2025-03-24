#include "CAN_Y_2025.h"

// Variables globals
CAN_TxHeaderTypeDef TxHeader = {0};
uint32_t TxMailbox = 0;
uint8_t TxData[8] = {0};

//Variables----------------------------------------------------------------------------------------------

uint8_t Disconnection_Pitot;
uint8_t Disconnection_BrakePressure;
uint8_t Disconnection_DashBoard;
uint8_t Disconnection_BMS;
uint8_t Disconnection_Front;
uint8_t Disconnection_Rear;
uint8_t Disconnection_SteeringSensor;
uint8_t Disconnection_Susp_R_R;
uint8_t Disconnection_Susp_R_L;
uint8_t Disconnection_Susp_F_R;
uint8_t Disconnection_Susp_F_L;
uint8_t Disconnection_BrakePedal;
uint8_t Disconnection_APPS2;
uint8_t Disconnection_APPS1;
uint8_t Disconnection_Ellipse;
uint16_t Inv_R_Enable;
uint16_t Inv_L_Enable;
uint8_t CustomMode_Identifier;
uint8_t CustomMode_Data;
uint8_t Torque_LockOn;
uint8_t Shutdown_PackageIntck;
uint8_t Shutdown_IMD;
uint8_t Shutdown_BMS;
uint8_t ERROR;
uint32_t Accumulator_Current;
uint16_t Lowest_CellVoltage;
uint16_t Highest_CellVoltage;
uint32_t Accumulator_Voltage;
uint16_t Charger_MaxVoltage;
uint8_t Charger_MaxCurrent;
uint16_t Lowest_CellTemp;
uint16_t Highest_CellTemp;
uint16_t Average_CellTemp;
uint8_t RacingMode;
uint8_t BMS_Alive;
uint8_t AIRs_State;
uint8_t Dash_Alive;
uint8_t PrechargeRequest;
uint8_t EnableDrive_Order;
uint8_t SoC_KF;
int8_t Speed;
uint16_t Precharge_Voltage;
uint8_t Precharge_Percentage;
uint8_t VDC_Max_Tyre_Slip;
uint8_t Car_State;
uint8_t AIRs_Request;
uint8_t InvertersAction;
uint8_t el_Vel_OK;
uint8_t TC_Warning;
uint8_t Regenerative_Enable;
uint8_t CriticalDisconnection;
uint8_t Relay_Error;
uint8_t Car_OK;
int16_t Power;
uint8_t Torque_OK;
uint8_t Sensorics_Mode;
uint8_t Critical_Signal_Disconnection;
uint8_t Critical_CAN_Disconnection;
uint8_t APPS_Implausibility;
uint8_t Sync_CAN1;
uint16_t ETAS_Sync_Y;
uint16_t Inv_R_TempMotor;
uint16_t Inv_R_TempIGBT;
int16_t Inv_R_Speed;
uint8_t Inv_R_RegID;
int16_t Inv_R_Iq;
int16_t Inv_R_Icommand;
int16_t Inv_R_Iactual;
uint16_t Inv_L_TempMotor;
uint16_t Inv_L_TempIGBT;
int16_t Inv_L_Speed;
int16_t Inv_L_Iq;
int16_t Inv_L_Icommand;
int16_t Inv_L_Iactual;
uint8_t Inv_L_RegID;
uint8_t Inverter_R_RegID;
uint8_t Inverter_R_b7tob0;
uint8_t Inverter_R_b15tob8;
uint8_t Inverter_L_RegID;
uint8_t Inverter_L_b7tob0;
uint8_t Inverter_L_b15tob8;

//Tx functions-------------------------------------------------------------------------------------------

void message_cantx_VECTOR__INDEPENDENT_SIG_MSG(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 0;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = VECTOR__INDEPENDENT_SIG_MSG_id;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_Pitot >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_BrakePressure >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_DashBoard >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_BMS >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_Front >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_Rear >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_SteeringSensor >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_Susp_R_R >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_Susp_R_L >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_Susp_F_R >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_Susp_F_L >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_BrakePedal >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_APPS2 >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_APPS1 >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Disconnection_Ellipse >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Inv_R_Enable >> 15) << 0) & 1);
   TxData[1] = Inv_R_Enable >> 7;
   TxData[2] = (TxData[2] & ~254) | ((Inv_R_Enable << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Inv_L_Enable >> 15) << 0) & 1);
   TxData[1] = Inv_L_Enable >> 7;
   TxData[2] = (TxData[2] & ~254) | ((Inv_L_Enable << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((CustomMode_Identifier >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((CustomMode_Identifier << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((CustomMode_Data >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((CustomMode_Data << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Torque_LockOn >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Shutdown_PackageIntck >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Shutdown_IMD >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Shutdown_BMS >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((ERROR >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Accumulator_Current >> 31) << 0) & 1);
   TxData[1] = Accumulator_Current >> 23;
   TxData[2] = Accumulator_Current >> 15;
   TxData[3] = Accumulator_Current >> 7;
   TxData[4] = (TxData[4] & ~254) | ((Accumulator_Current << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Lowest_CellVoltage >> 15) << 0) & 1);
   TxData[1] = Lowest_CellVoltage >> 7;
   TxData[2] = (TxData[2] & ~254) | ((Lowest_CellVoltage << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Highest_CellVoltage >> 15) << 0) & 1);
   TxData[1] = Highest_CellVoltage >> 7;
   TxData[2] = (TxData[2] & ~254) | ((Highest_CellVoltage << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Accumulator_Voltage >> 23) << 0) & 1);
   TxData[1] = Accumulator_Voltage >> 15;
   TxData[2] = Accumulator_Voltage >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Accumulator_Voltage << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Charger_MaxVoltage >> 15) << 0) & 1);
   TxData[1] = Charger_MaxVoltage >> 7;
   TxData[2] = (TxData[2] & ~254) | ((Charger_MaxVoltage << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Charger_MaxCurrent >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((Charger_MaxCurrent << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Lowest_CellTemp >> 15) << 0) & 1);
   TxData[1] = Lowest_CellTemp >> 7;
   TxData[2] = (TxData[2] & ~254) | ((Lowest_CellTemp << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Highest_CellTemp >> 15) << 0) & 1);
   TxData[1] = Highest_CellTemp >> 7;
   TxData[2] = (TxData[2] & ~254) | ((Highest_CellTemp << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Average_CellTemp >> 15) << 0) & 1);
   TxData[1] = Average_CellTemp >> 7;
   TxData[2] = (TxData[2] & ~254) | ((Average_CellTemp << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((RacingMode >> 2) << 0) & 1);
   TxData[1] = (TxData[1] & ~192) | ((RacingMode << 6) & 192); 
   TxData[0] = (TxData[0] & ~1) | (((BMS_Alive >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((BMS_Alive << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((AIRs_State >> 3) << 0) & 1);
   TxData[1] = (TxData[1] & ~224) | ((AIRs_State << 5) & 224); 
   TxData[0] = (TxData[0] & ~1) | (((Dash_Alive >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((Dash_Alive << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((PrechargeRequest >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((EnableDrive_Order >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((SoC_KF >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((SoC_KF << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Speed >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((Speed << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Precharge_Voltage >> 15) << 0) & 1);
   TxData[1] = Precharge_Voltage >> 7;
   TxData[2] = (TxData[2] & ~254) | ((Precharge_Voltage << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Precharge_Percentage >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((Precharge_Percentage << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((VDC_Max_Tyre_Slip >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((VDC_Max_Tyre_Slip << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Car_State >> 4) << 0) & 1);
   TxData[1] = (TxData[1] & ~240) | ((Car_State << 4) & 240); 
   TxData[0] = (TxData[0] & ~1) | (((AIRs_Request >> 3) << 0) & 1);
   TxData[1] = (TxData[1] & ~224) | ((AIRs_Request << 5) & 224); 
   TxData[0] = (TxData[0] & ~1) | (((InvertersAction >> 4) << 0) & 1);
   TxData[1] = (TxData[1] & ~240) | ((InvertersAction << 4) & 240); 
   TxData[0] = (TxData[0] & ~1) | (((el_Vel_OK >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((TC_Warning >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Regenerative_Enable >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((CriticalDisconnection >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Relay_Error >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Car_OK >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Power >> 15) << 0) & 1);
   TxData[1] = Power >> 7;
   TxData[2] = (TxData[2] & ~254) | ((Power << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Torque_OK >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Sensorics_Mode >> 2) << 0) & 1);
   TxData[1] = (TxData[1] & ~192) | ((Sensorics_Mode << 6) & 192); 
   TxData[0] = (TxData[0] & ~1) | (((Critical_Signal_Disconnection >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Critical_CAN_Disconnection >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((APPS_Implausibility >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~1) | (((Sync_CAN1 >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((Sync_CAN1 << 1) & 254); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_STAT_ETAS_Sync(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 2;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = STAT_ETAS_Sync_id;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[0] = (TxData[0] & ~255) | (((ETAS_Sync_Y >> 8) << 0) & 255);
   TxData[1] = ETAS_Sync_Y >> 0;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_CTRL_Inverter_R_Tx(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 4;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = CTRL_Inverter_R_Tx_id;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[1] = (TxData[1] & ~1) | (((Inv_R_TempMotor >> 15) << 0) & 1);
   TxData[2] = Inv_R_TempMotor >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_R_TempMotor << 1) & 254); 
   TxData[1] = (TxData[1] & ~1) | (((Inv_R_TempIGBT >> 15) << 0) & 1);
   TxData[2] = Inv_R_TempIGBT >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_R_TempIGBT << 1) & 254); 
   TxData[1] = (TxData[1] & ~1) | (((Inv_R_Speed >> 15) << 0) & 1);
   TxData[2] = Inv_R_Speed >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_R_Speed << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Inv_R_RegID >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((Inv_R_RegID << 1) & 254); 
   TxData[1] = (TxData[1] & ~1) | (((Inv_R_Iq >> 15) << 0) & 1);
   TxData[2] = Inv_R_Iq >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_R_Iq << 1) & 254); 
   TxData[1] = (TxData[1] & ~1) | (((Inv_R_Icommand >> 15) << 0) & 1);
   TxData[2] = Inv_R_Icommand >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_R_Icommand << 1) & 254); 
   TxData[1] = (TxData[1] & ~1) | (((Inv_R_Iactual >> 15) << 0) & 1);
   TxData[2] = Inv_R_Iactual >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_R_Iactual << 1) & 254); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_CTRL_Inverter_L_Tx(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 4;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = CTRL_Inverter_L_Tx_id;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[1] = (TxData[1] & ~1) | (((Inv_L_TempMotor >> 15) << 0) & 1);
   TxData[2] = Inv_L_TempMotor >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_L_TempMotor << 1) & 254); 
   TxData[1] = (TxData[1] & ~1) | (((Inv_L_TempIGBT >> 15) << 0) & 1);
   TxData[2] = Inv_L_TempIGBT >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_L_TempIGBT << 1) & 254); 
   TxData[1] = (TxData[1] & ~1) | (((Inv_L_Speed >> 15) << 0) & 1);
   TxData[2] = Inv_L_Speed >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_L_Speed << 1) & 254); 
   TxData[1] = (TxData[1] & ~1) | (((Inv_L_Iq >> 15) << 0) & 1);
   TxData[2] = Inv_L_Iq >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_L_Iq << 1) & 254); 
   TxData[1] = (TxData[1] & ~1) | (((Inv_L_Icommand >> 15) << 0) & 1);
   TxData[2] = Inv_L_Icommand >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_L_Icommand << 1) & 254); 
   TxData[1] = (TxData[1] & ~1) | (((Inv_L_Iactual >> 15) << 0) & 1);
   TxData[2] = Inv_L_Iactual >> 7;
   TxData[3] = (TxData[3] & ~254) | ((Inv_L_Iactual << 1) & 254); 
   TxData[0] = (TxData[0] & ~1) | (((Inv_L_RegID >> 7) << 0) & 1);
   TxData[1] = (TxData[1] & ~254) | ((Inv_L_RegID << 1) & 254); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_CTRL_ETAS_Inverter_R_Rx(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 3;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = CTRL_ETAS_Inverter_R_Rx_id;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[0] = (TxData[0] & ~255) | (((Inverter_R_RegID >> 0) << 0) & 255);
   TxData[1] = (TxData[1] & ~255) | (((Inverter_R_b7tob0 >> 0) << 0) & 255);
   TxData[2] = (TxData[2] & ~255) | (((Inverter_R_b15tob8 >> 0) << 0) & 255);
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_CTRL_ETAS_Inverter_L_Rx(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 3;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = CTRL_ETAS_Inverter_L_Rx_id;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[0] = (TxData[0] & ~255) | (((Inverter_L_RegID >> 0) << 0) & 255);
   TxData[1] = (TxData[1] & ~255) | (((Inverter_L_b7tob0 >> 0) << 0) & 255);
   TxData[2] = (TxData[2] & ~255) | (((Inverter_L_b15tob8 >> 0) << 0) & 255);
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

//Rx functions-------------------------------------------------------------------------------------------

void message_canrx_VECTOR__INDEPENDENT_SIG_MSG(uint8_t *RxData) {
   Disconnection_Pitot = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_Pitot Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_BrakePressure = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_BrakePressure Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_DashBoard = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_DashBoard Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_BMS = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_BMS Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_Front = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_Front Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_Rear = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_Rear Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_SteeringSensor = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_SteeringSensor Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_Susp_R_R = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_Susp_R_R Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_Susp_R_L = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_Susp_R_L Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_Susp_F_R = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_Susp_F_R Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_Susp_F_L = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_Susp_F_L Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_BrakePedal = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_BrakePedal Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_APPS2 = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_APPS2 Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_APPS1 = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_APPS1 Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Disconnection_Ellipse = ((RxData[0] & 1) >> 0);   // Signal: Disconnection_Ellipse Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Inv_R_Enable = ((RxData[0] & 1) << 15) | (RxData[1] << 7) | ((RxData[2] & 254) >> 1);   // Signal: Inv_R_Enable Start Bit: 0, Length: 16 Byte Order: 1, Value Type: + Factor: 1 Offset: 0 Unit: Bits
   Inv_L_Enable = ((RxData[0] & 1) << 15) | (RxData[1] << 7) | ((RxData[2] & 254) >> 1);   // Signal: Inv_L_Enable Start Bit: 0, Length: 16 Byte Order: 1, Value Type: + Factor: 1 Offset: 0 Unit: Bits
   CustomMode_Identifier = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: CustomMode_Identifier Start Bit: 0, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   CustomMode_Data = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: CustomMode_Data Start Bit: 0, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   Torque_LockOn = ((RxData[0] & 1) >> 0);   // Signal: Torque_LockOn Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Shutdown_PackageIntck = ((RxData[0] & 1) >> 0);   // Signal: Shutdown_PackageIntck Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Shutdown_IMD = ((RxData[0] & 1) >> 0);   // Signal: Shutdown_IMD Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Shutdown_BMS = ((RxData[0] & 1) >> 0);   // Signal: Shutdown_BMS Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   ERROR = ((RxData[0] & 1) >> 0);   // Signal: ERROR Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Accumulator_Current = ((RxData[0] & 1) << 31) | (RxData[1] << 23) | (RxData[2] << 15) | (RxData[3] << 7) | ((RxData[4] & 254) >> 1);   // Signal: Accumulator_Current Start Bit: 0, Length: 32 Byte Order: 0, Value Type: + Factor: 0.001 Offset: -2147483.648 Unit: A
   Lowest_CellVoltage = ((RxData[0] & 1) << 15) | (RxData[1] << 7) | ((RxData[2] & 254) >> 1);   // Signal: Lowest_CellVoltage Start Bit: 0, Length: 16 Byte Order: 0, Value Type: + Factor: 0.0001 Offset: 0 Unit: V
   Highest_CellVoltage = ((RxData[0] & 1) << 15) | (RxData[1] << 7) | ((RxData[2] & 254) >> 1);   // Signal: Highest_CellVoltage Start Bit: 0, Length: 16 Byte Order: 0, Value Type: + Factor: 0.0001 Offset: 0 Unit: V
   Accumulator_Voltage = ((RxData[0] & 1) << 23) | (RxData[1] << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Accumulator_Voltage Start Bit: 0, Length: 24 Byte Order: 0, Value Type: + Factor: 0.0001 Offset: 0 Unit: V
   Charger_MaxVoltage = ((RxData[0] & 1) << 15) | (RxData[1] << 7) | ((RxData[2] & 254) >> 1);   // Signal: Charger_MaxVoltage Start Bit: 0, Length: 16 Byte Order: 0, Value Type: + Factor: 0.01 Offset: 0 Unit: 
   Charger_MaxCurrent = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: Charger_MaxCurrent Start Bit: 0, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   Lowest_CellTemp = ((RxData[0] & 1) << 15) | (RxData[1] << 7) | ((RxData[2] & 254) >> 1);   // Signal: Lowest_CellTemp Start Bit: 0, Length: 16 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0 Unit: ºC
   Highest_CellTemp = ((RxData[0] & 1) << 15) | (RxData[1] << 7) | ((RxData[2] & 254) >> 1);   // Signal: Highest_CellTemp Start Bit: 0, Length: 16 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0 Unit: ºC
   Average_CellTemp = ((RxData[0] & 1) << 15) | (RxData[1] << 7) | ((RxData[2] & 254) >> 1);   // Signal: Average_CellTemp Start Bit: 0, Length: 16 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0 Unit: ºC
   RacingMode = ((RxData[0] & 1) << 2) | ((RxData[1] & 192) >> 6);   // Signal: RacingMode Start Bit: 0, Length: 3 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   BMS_Alive = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: BMS_Alive Start Bit: 0, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   AIRs_State = ((RxData[0] & 1) << 3) | ((RxData[1] & 224) >> 5);   // Signal: AIRs_State Start Bit: 0, Length: 4 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   Dash_Alive = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: Dash_Alive Start Bit: 0, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   PrechargeRequest = ((RxData[0] & 1) >> 0);   // Signal: PrechargeRequest Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   EnableDrive_Order = ((RxData[0] & 1) >> 0);   // Signal: EnableDrive_Order Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   SoC_KF = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: SoC_KF Start Bit: 0, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: %
   Speed = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: Speed Start Bit: 0, Length: 8 Byte Order: 0, Value Type: - Factor: 1 Offset: 0 Unit: km/h
   Precharge_Voltage = ((RxData[0] & 1) << 15) | (RxData[1] << 7) | ((RxData[2] & 254) >> 1);   // Signal: Precharge_Voltage Start Bit: 0, Length: 16 Byte Order: 0, Value Type: + Factor: 0.01 Offset: 0 Unit: V
   Precharge_Percentage = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: Precharge_Percentage Start Bit: 0, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 100%
   VDC_Max_Tyre_Slip = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: VDC_Max_Tyre_Slip Start Bit: 0, Length: 8 Byte Order: 0, Value Type: + Factor: 0.01 Offset: 0 Unit: -
   Car_State = ((RxData[0] & 1) << 4) | ((RxData[1] & 240) >> 4);   // Signal: Car_State Start Bit: 0, Length: 5 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   AIRs_Request = ((RxData[0] & 1) << 3) | ((RxData[1] & 224) >> 5);   // Signal: AIRs_Request Start Bit: 0, Length: 4 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   InvertersAction = ((RxData[0] & 1) << 4) | ((RxData[1] & 240) >> 4);   // Signal: InvertersAction Start Bit: 0, Length: 5 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: -
   el_Vel_OK = ((RxData[0] & 1) >> 0);   // Signal: el_Vel_OK Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   TC_Warning = ((RxData[0] & 1) >> 0);   // Signal: TC_Warning Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Regenerative_Enable = ((RxData[0] & 1) >> 0);   // Signal: Regenerative_Enable Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   CriticalDisconnection = ((RxData[0] & 1) >> 0);   // Signal: CriticalDisconnection Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Relay_Error = ((RxData[0] & 1) >> 0);   // Signal: Relay_Error Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Car_OK = ((RxData[0] & 1) >> 0);   // Signal: Car_OK Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Power = ((RxData[0] & 1) << 15) | (RxData[1] << 7) | ((RxData[2] & 254) >> 1);   // Signal: Power Start Bit: 0, Length: 16 Byte Order: 0, Value Type: - Factor: 0.01 Offset: 0 Unit: kW
   Torque_OK = ((RxData[0] & 1) >> 0);   // Signal: Torque_OK Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Sensorics_Mode = ((RxData[0] & 1) << 2) | ((RxData[1] & 192) >> 6);   // Signal: Sensorics_Mode Start Bit: 0, Length: 3 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   Critical_Signal_Disconnection = ((RxData[0] & 1) >> 0);   // Signal: Critical_Signal_Disconnection Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Critical_CAN_Disconnection = ((RxData[0] & 1) >> 0);   // Signal: Critical_CAN_Disconnection Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   APPS_Implausibility = ((RxData[0] & 1) >> 0);   // Signal: APPS_Implausibility Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: Bit
   Sync_CAN1 = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: Sync_CAN1 Start Bit: 0, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
}

void message_canrx_STAT_ETAS_Sync(uint8_t *RxData) {
   ETAS_Sync_Y = ((RxData[0] & 255) << 8) | (RxData[1] << 0);   // Signal: ETAS_Sync_Y Start Bit: 7, Length: 16 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: -
}

void message_canrx_CTRL_Inverter_R_Tx(uint8_t *RxData) {
   Inv_R_TempMotor = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_R_TempMotor Start Bit: 8, Length: 16 Byte Order: 1, Value Type: + Factor: 1 Offset: 0 Unit: Bits
   Inv_R_TempIGBT = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_R_TempIGBT Start Bit: 8, Length: 16 Byte Order: 1, Value Type: + Factor: 1 Offset: 0 Unit: Bits
   Inv_R_Speed = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_R_Speed Start Bit: 8, Length: 16 Byte Order: 1, Value Type: - Factor: 0.36622256 Offset: 0 Unit: RPM
   Inv_R_RegID = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: Inv_R_RegID Start Bit: 0, Length: 8 Byte Order: 1, Value Type: + Factor: 1 Offset: 0 Unit: -
   Inv_R_Iq = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_R_Iq Start Bit: 8, Length: 16 Byte Order: 1, Value Type: - Factor: 0.3738317757 Offset: 0 Unit: A
   Inv_R_Icommand = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_R_Icommand Start Bit: 8, Length: 16 Byte Order: 1, Value Type: - Factor: 0.3738317757 Offset: 0 Unit: A
   Inv_R_Iactual = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_R_Iactual Start Bit: 8, Length: 16 Byte Order: 1, Value Type: - Factor: 0.3738317757 Offset: 0 Unit: A
}

void message_canrx_CTRL_Inverter_L_Tx(uint8_t *RxData) {
   Inv_L_TempMotor = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_L_TempMotor Start Bit: 8, Length: 16 Byte Order: 1, Value Type: + Factor: 1 Offset: 0 Unit: Bits
   Inv_L_TempIGBT = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_L_TempIGBT Start Bit: 8, Length: 16 Byte Order: 1, Value Type: + Factor: 1 Offset: 0 Unit: Bits
   Inv_L_Speed = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_L_Speed Start Bit: 8, Length: 16 Byte Order: 1, Value Type: - Factor: -0.36622256 Offset: 0 Unit: RPM
   Inv_L_Iq = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_L_Iq Start Bit: 8, Length: 16 Byte Order: 1, Value Type: - Factor: 0.3738317757 Offset: 0 Unit: A
   Inv_L_Icommand = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_L_Icommand Start Bit: 8, Length: 16 Byte Order: 1, Value Type: - Factor: 0.3738317757 Offset: 0 Unit: A
   Inv_L_Iactual = ((RxData[1] & 1) << 15) | (RxData[2] << 7) | ((RxData[3] & 254) >> 1);   // Signal: Inv_L_Iactual Start Bit: 8, Length: 16 Byte Order: 1, Value Type: - Factor: 0.3738317757 Offset: 0 Unit: A
   Inv_L_RegID = ((RxData[0] & 1) << 7) | ((RxData[1] & 254) >> 1);   // Signal: Inv_L_RegID Start Bit: 0, Length: 8 Byte Order: 1, Value Type: + Factor: 1 Offset: 0 Unit: -
}

void message_canrx_CTRL_ETAS_Inverter_R_Rx(uint8_t *RxData) {
   Inverter_R_RegID = ((RxData[0] & 255) >> 0);   // Signal: Inverter_R_RegID Start Bit: 7, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   Inverter_R_b7tob0 = ((RxData[1] & 255) >> 0);   // Signal: Inverter_R_b7tob0 Start Bit: 15, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   Inverter_R_b15tob8 = ((RxData[2] & 255) >> 0);   // Signal: Inverter_R_b15tob8 Start Bit: 23, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
}

void message_canrx_CTRL_ETAS_Inverter_L_Rx(uint8_t *RxData) {
   Inverter_L_RegID = ((RxData[0] & 255) >> 0);   // Signal: Inverter_L_RegID Start Bit: 7, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   Inverter_L_b7tob0 = ((RxData[1] & 255) >> 0);   // Signal: Inverter_L_b7tob0 Start Bit: 15, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   Inverter_L_b15tob8 = ((RxData[2] & 255) >> 0);   // Signal: Inverter_L_b15tob8 Start Bit: 23, Length: 8 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
}
