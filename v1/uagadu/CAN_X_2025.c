#include "CAN_X_2025.h"

// Variables
uint8_t el_AUTO_STATUS;
int8_t Inv_R_Iq;
int8_t Inv_R_Icommand;
int8_t Inv_R_Iactual;
int8_t Inv_L_Iq;
int8_t Inv_L_Icommand;
int8_t Inv_L_Iactual;
uint16_t SOE;
uint8_t Charger_AIRs_State;
uint8_t Charger_AIRs_Request;
uint8_t Charger_Sync;
uint8_t VDC_Steering_Deadzone;
uint8_t VDC_Min_Tyre_Slip;
uint8_t VDC_Max_Tyre_Slip;
uint8_t VDC_Max_TV_DiffTq;
uint8_t VDC_Max_Steering_Angle;
uint8_t VDC_AP_SatUp;
uint8_t VDC_AP_SatDown;
uint16_t TotalTime;
uint8_t LapCount;
uint16_t LapTime;
uint16_t Average_CellTemp;
uint32_t Accumulator_Voltage;
uint16_t Accumulator_Current;
uint8_t Shutdown_PackageIntck;
uint8_t Shutdown_IMD;
uint8_t Shutdown_BMS;
uint8_t AIRs_State;
uint16_t Highest_CellVoltage;
uint16_t Highest_CellTemp;
uint16_t Lowest_CellVoltage;
uint16_t Lowest_CellTemp;
uint16_t DASH_LV;
uint16_t DASH_5V;
uint16_t DASH_3V3;
uint8_t Dash_Alive;
uint16_t BMS_LV;
uint16_t BMS_5V;
uint16_t BMS_12V;
uint8_t BMS_Alive;
uint8_t Precharge_Percentage;
int16_t Power;
uint16_t SOC_High;
uint16_t SOC_Low;
uint16_t SOC_Avg;
uint8_t el_Track_Valid;
uint8_t el_Slip_Valid;
uint8_t el_Curvature_Valid;
int16_t el_SlipAngle;
uint16_t el_CurvatureRadius;
int16_t el_AngleTrack;
int16_t el_Vel_GPS_N;
int16_t el_Vel_GPS_E;
int16_t el_Vel_GPS_D;
uint8_t InvertersAction;
uint8_t Relay_Error;
uint8_t Regenerative_Enable;
uint8_t TC_Warning;
uint8_t Sensorics_Mode;
uint8_t el_Vel_OK;
uint8_t Torque_OK;
uint8_t APPS_Implausibility;
uint8_t Disconnection_BrakePressure2;
uint8_t Disconnection_BrakePressure1;
uint8_t Critical_Signal_Disconnection;
uint8_t Critical_CAN_Disconnection;
uint8_t Disconnection_InvR;
uint8_t Disconnection_InvL;
uint8_t Disconnection_Susp_R_R;
uint8_t Disconnection_Susp_R_L;
uint8_t Disconnection_Susp_F_R;
uint8_t Disconnection_Susp_F_L;
uint8_t Disconnection_SteeringSensor;
uint8_t Disconnection_Rear;
uint8_t Disconnection_Pitot;
uint8_t Disconnection_Front;
uint8_t Disconnection_Ellipse;
uint8_t Disconnection_DashBoard;
uint8_t Disconnection_BrakePedal;
uint8_t Disconnection_BMS;
uint8_t Disconnection_APPS2;
uint8_t Disconnection_APPS1;
uint8_t Inv_Speed;
uint16_t el_VEL;
int8_t SteeringSensor_Value;
uint8_t BrakePedal_Value;
uint8_t APPS2_Value;
uint8_t APPS1_Value;
uint8_t Pump_R;
uint8_t Pump_L;
uint8_t Button_2;
uint8_t Button_1;
uint8_t TV_Level;
uint8_t TC_Level;
uint8_t Driver;
uint8_t RacingMode;
uint8_t EnableDrive_Order;
uint8_t PrechargeRequest;
uint8_t Refri_R;
uint8_t Refri_L;
uint8_t Car_State;
uint8_t Car_OK;
uint8_t AIRs_Request;
uint8_t BrakeLight_Control;
int16_t el_Accel_Z;
int16_t el_Accel_Y;
int16_t el_Accel_X;
int16_t el_YAW;
int16_t el_Pitch;
int16_t el_Roll;
int16_t el_Vel_EKF_Z;
int16_t el_Vel_EKF_Y;
int16_t el_Vel_EKF_X;
int16_t el_Gyro_Z;
int16_t el_Gyro_Y;
int16_t el_Gyro_X;
uint8_t el_SolutionMode;
uint8_t el_Vel_GPS_Valid;
uint8_t el_Vel_EKF_Valid;
uint16_t Inv_R_TempMotor;
int16_t current_R;
uint16_t Inv_R_TempIGBT;
int8_t RR_Vel_ms_Wheel;
uint16_t Inv_L_TempMotor;
int16_t current_L;
uint16_t Inv_L_TempIGBT;
int8_t RL_Vel_ms_Wheel;
uint16_t SUSP_R_R;
uint16_t SUSP_R_L;
uint16_t SUSP_F_R;
uint16_t SUSP_F_L;
int16_t Throttle_Torque;
int16_t Torque_R;
int16_t Torque_L;
uint16_t Susp_R_R_Bits;
uint16_t Susp_R_L_Bits;
uint16_t FECU_LV;
uint16_t FECU_5V;
uint16_t FECU_3V3;
uint8_t Shutdown_Setas;
uint8_t Shutdown_SC_BOTS;
uint8_t Shutdown_BSPD_Inertia;
uint8_t Front_Alive;
uint16_t RECU_LV;
uint16_t RECU_5V;
uint16_t RECU_3V3;
uint8_t Shutdown_TSMS_TSMP;
uint8_t Shutdown_RightTS;
uint8_t Shutdown_LeftTS;
uint8_t Shutdown_HVD;
uint8_t Shutdown_HVBox;
uint8_t Rear_Alive;
uint16_t BrakePressure2_Bits;
uint16_t BrakePressure1_Bits;
uint16_t Pitot_Bits;
uint16_t Susp_F_R_Bits;
uint16_t Susp_F_L_Bits;
uint16_t SteeringSensor_Bits;
uint16_t BrakePedal_Bits;
uint16_t APPS2_Bits;
uint16_t APPS1_Bits;
uint8_t ETAS_Sync;

// TX Functions
void message_cantx_VECTOR__INDEPENDENT_SIG_MSG(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 0;
   TxHeader.StdId = 3221225472;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_STAT_BMS_AIRs_State(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 1;
   TxHeader.StdId = 145;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_CTRL_CHARGER_AIRs_Request(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 1;
   TxHeader.StdId = 144;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_STAT_CHARGER_Sync(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 1;
   TxHeader.StdId = 128;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ETAS_VDC_Params(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 9;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ETAS_VDC_LapTiming(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 4;
   TxHeader.StdId = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_CTRL_BMS_Accu_Data(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 34;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_CTRL_BMS_Cell_Extremes(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 35;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_STAT_DASH_Keep_Alive(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 48;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_STAT_BMS_Keep_Alive(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 32;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ETAS_TS_Data(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 7;
   TxHeader.StdId = 5;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ELLIPSE_Auto(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 7;
   TxHeader.StdId = 88;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_CTRL_ELLIPSE_GPS_Vel(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 82;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_STAT_ETAS_Diagnostics(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 4;
   TxHeader.StdId = 1;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ETAS_VDC_Values(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_CTRL_DASH_Driver_Inputs(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 3;
   TxHeader.StdId = 49;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_CTRL_ETAS_System(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 1;
   TxHeader.StdId = 2;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ELLIPSE_EKF_Pos(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 8;
   TxHeader.StdId = 85;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ELLIPSE_IMU_Accel(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 84;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ELLIPSE_EKF_Euler(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 86;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_CTRL_ELLIPSE_EKF_Vel(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 81;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_STAT_ELLIPSE_Status(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 4;
   TxHeader.StdId = 80;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ELLIPSE_IMU_Gyro(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 87;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_CTRL_ELLIPSE_Vel_Valid(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 83;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ETAS_Inverter_R_Data(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 5;
   TxHeader.StdId = 4;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ETAS_Inverter_L_Data(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 5;
   TxHeader.StdId = 3;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ETAS_VDC_Suspe(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 7;
   TxHeader.StdId = 10;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_PROC_ETAS_VDC_Tq(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 4;
   TxHeader.StdId = 7;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_RAW_RECU_Data(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 3;
   TxHeader.StdId = 113;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_STAT_FECU_Keep_Alive(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 7;
   TxHeader.StdId = 64;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_STAT_RECU_Keep_Alive(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 7;
   TxHeader.StdId = 112;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_RAW_FECU_Data2(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 8;
   TxHeader.StdId = 66;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_RAW_FECU_Data1(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 6;
   TxHeader.StdId = 65;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}
void message_cantx_STAT_ETAS_Sync(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData) {
   TxHeader.DLC = 1;
   TxHeader.StdId = 0;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.TransmitGlobalTime = DISABLE;
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK) {}
}

// RX Functions
void message_canrx_VECTOR__INDEPENDENT_SIG_MSG(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_STAT_BMS_AIRs_State(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_CTRL_CHARGER_AIRs_Request(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_STAT_CHARGER_Sync(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ETAS_VDC_Params(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ETAS_VDC_LapTiming(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_CTRL_BMS_Accu_Data(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_CTRL_BMS_Cell_Extremes(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_STAT_DASH_Keep_Alive(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_STAT_BMS_Keep_Alive(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ETAS_TS_Data(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ELLIPSE_Auto(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_CTRL_ELLIPSE_GPS_Vel(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_STAT_ETAS_Diagnostics(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ETAS_VDC_Values(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_CTRL_DASH_Driver_Inputs(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_CTRL_ETAS_System(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ELLIPSE_EKF_Pos(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ELLIPSE_IMU_Accel(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ELLIPSE_EKF_Euler(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_CTRL_ELLIPSE_EKF_Vel(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_STAT_ELLIPSE_Status(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ELLIPSE_IMU_Gyro(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_CTRL_ELLIPSE_Vel_Valid(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ETAS_Inverter_R_Data(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ETAS_Inverter_L_Data(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ETAS_VDC_Suspe(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_PROC_ETAS_VDC_Tq(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_RAW_RECU_Data(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_STAT_FECU_Keep_Alive(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_STAT_RECU_Keep_Alive(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_RAW_FECU_Data2(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_RAW_FECU_Data1(uint8_t *RxData) {
   // Implementació de la recepció
}
void message_canrx_STAT_ETAS_Sync(uint8_t *RxData) {
   // Implementació de la recepció
}
