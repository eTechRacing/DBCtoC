#ifndef INC_CAN_X_2025_H_
#define INC_CAN_X_2025_H_

#include "main.h"

extern uint8_t el_AUTO_STATUS;
extern int8_t Inv_R_Iq;
extern int8_t Inv_R_Icommand;
extern int8_t Inv_R_Iactual;
extern int8_t Inv_L_Iq;
extern int8_t Inv_L_Icommand;
extern int8_t Inv_L_Iactual;
extern uint16_t SOE;
extern uint8_t Charger_AIRs_State;
extern uint8_t Charger_AIRs_Request;
extern uint8_t Charger_Sync;
extern uint8_t VDC_Steering_Deadzone;
extern uint8_t VDC_Min_Tyre_Slip;
extern uint8_t VDC_Max_Tyre_Slip;
extern uint8_t VDC_Max_TV_DiffTq;
extern uint8_t VDC_Max_Steering_Angle;
extern uint8_t VDC_AP_SatUp;
extern uint8_t VDC_AP_SatDown;
extern uint16_t TotalTime;
extern uint8_t LapCount;
extern uint16_t LapTime;
extern uint16_t Average_CellTemp;
extern uint32_t Accumulator_Voltage;
extern uint16_t Accumulator_Current;
extern uint8_t Shutdown_PackageIntck;
extern uint8_t Shutdown_IMD;
extern uint8_t Shutdown_BMS;
extern uint8_t AIRs_State;
extern uint16_t Highest_CellVoltage;
extern uint16_t Highest_CellTemp;
extern uint16_t Lowest_CellVoltage;
extern uint16_t Lowest_CellTemp;
extern uint16_t DASH_LV;
extern uint16_t DASH_5V;
extern uint16_t DASH_3V3;
extern uint8_t Dash_Alive;
extern uint16_t BMS_LV;
extern uint16_t BMS_5V;
extern uint16_t BMS_12V;
extern uint8_t BMS_Alive;
extern uint8_t Precharge_Percentage;
extern int16_t Power;
extern uint16_t SOC_High;
extern uint16_t SOC_Low;
extern uint16_t SOC_Avg;
extern uint8_t el_Track_Valid;
extern uint8_t el_Slip_Valid;
extern uint8_t el_Curvature_Valid;
extern int16_t el_SlipAngle;
extern uint16_t el_CurvatureRadius;
extern int16_t el_AngleTrack;
extern int16_t el_Vel_GPS_N;
extern int16_t el_Vel_GPS_E;
extern int16_t el_Vel_GPS_D;
extern uint8_t InvertersAction;
extern uint8_t Relay_Error;
extern uint8_t Regenerative_Enable;
extern uint8_t TC_Warning;
extern uint8_t Sensorics_Mode;
extern uint8_t el_Vel_OK;
extern uint8_t Torque_OK;
extern uint8_t APPS_Implausibility;
extern uint8_t Disconnection_BrakePressure2;
extern uint8_t Disconnection_BrakePressure1;
extern uint8_t Critical_Signal_Disconnection;
extern uint8_t Critical_CAN_Disconnection;
extern uint8_t Disconnection_InvR;
extern uint8_t Disconnection_InvL;
extern uint8_t Disconnection_Susp_R_R;
extern uint8_t Disconnection_Susp_R_L;
extern uint8_t Disconnection_Susp_F_R;
extern uint8_t Disconnection_Susp_F_L;
extern uint8_t Disconnection_SteeringSensor;
extern uint8_t Disconnection_Rear;
extern uint8_t Disconnection_Pitot;
extern uint8_t Disconnection_Front;
extern uint8_t Disconnection_Ellipse;
extern uint8_t Disconnection_DashBoard;
extern uint8_t Disconnection_BrakePedal;
extern uint8_t Disconnection_BMS;
extern uint8_t Disconnection_APPS2;
extern uint8_t Disconnection_APPS1;
extern uint8_t Inv_Speed;
extern uint16_t el_VEL;
extern int8_t SteeringSensor_Value;
extern uint8_t BrakePedal_Value;
extern uint8_t APPS2_Value;
extern uint8_t APPS1_Value;
extern uint8_t Pump_R;
extern uint8_t Pump_L;
extern uint8_t Button_2;
extern uint8_t Button_1;
extern uint8_t TV_Level;
extern uint8_t TC_Level;
extern uint8_t Driver;
extern uint8_t RacingMode;
extern uint8_t EnableDrive_Order;
extern uint8_t PrechargeRequest;
extern uint8_t Refri_R;
extern uint8_t Refri_L;
extern uint8_t Car_State;
extern uint8_t Car_OK;
extern uint8_t AIRs_Request;
extern uint8_t BrakeLight_Control;
extern int16_t el_Accel_Z;
extern int16_t el_Accel_Y;
extern int16_t el_Accel_X;
extern int16_t el_YAW;
extern int16_t el_Pitch;
extern int16_t el_Roll;
extern int16_t el_Vel_EKF_Z;
extern int16_t el_Vel_EKF_Y;
extern int16_t el_Vel_EKF_X;
extern int16_t el_Gyro_Z;
extern int16_t el_Gyro_Y;
extern int16_t el_Gyro_X;
extern uint8_t el_SolutionMode;
extern uint8_t el_Vel_GPS_Valid;
extern uint8_t el_Vel_EKF_Valid;
extern uint16_t Inv_R_TempMotor;
extern int16_t current_R;
extern uint16_t Inv_R_TempIGBT;
extern int8_t RR_Vel_ms_Wheel;
extern uint16_t Inv_L_TempMotor;
extern int16_t current_L;
extern uint16_t Inv_L_TempIGBT;
extern int8_t RL_Vel_ms_Wheel;
extern uint16_t SUSP_R_R;
extern uint16_t SUSP_R_L;
extern uint16_t SUSP_F_R;
extern uint16_t SUSP_F_L;
extern int16_t Throttle_Torque;
extern int16_t Torque_R;
extern int16_t Torque_L;
extern uint16_t Susp_R_R_Bits;
extern uint16_t Susp_R_L_Bits;
extern uint16_t FECU_LV;
extern uint16_t FECU_5V;
extern uint16_t FECU_3V3;
extern uint8_t Shutdown_Setas;
extern uint8_t Shutdown_SC_BOTS;
extern uint8_t Shutdown_BSPD_Inertia;
extern uint8_t Front_Alive;
extern uint16_t RECU_LV;
extern uint16_t RECU_5V;
extern uint16_t RECU_3V3;
extern uint8_t Shutdown_TSMS_TSMP;
extern uint8_t Shutdown_RightTS;
extern uint8_t Shutdown_LeftTS;
extern uint8_t Shutdown_HVD;
extern uint8_t Shutdown_HVBox;
extern uint8_t Rear_Alive;
extern uint16_t BrakePressure2_Bits;
extern uint16_t BrakePressure1_Bits;
extern uint16_t Pitot_Bits;
extern uint16_t Susp_F_R_Bits;
extern uint16_t Susp_F_L_Bits;
extern uint16_t SteeringSensor_Bits;
extern uint16_t BrakePedal_Bits;
extern uint16_t APPS2_Bits;
extern uint16_t APPS1_Bits;
extern uint8_t ETAS_Sync;

//TX-----------------------------------------------------------------------------------------------------

void message_cantx_VECTOR__INDEPENDENT_SIG_MSG(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_STAT_BMS_AIRs_State(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_CTRL_CHARGER_AIRs_Request(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_STAT_CHARGER_Sync(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ETAS_VDC_Params(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ETAS_VDC_LapTiming(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_CTRL_BMS_Accu_Data(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_CTRL_BMS_Cell_Extremes(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_STAT_DASH_Keep_Alive(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_STAT_BMS_Keep_Alive(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ETAS_TS_Data(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ELLIPSE_Auto(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_CTRL_ELLIPSE_GPS_Vel(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_STAT_ETAS_Diagnostics(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ETAS_VDC_Values(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_CTRL_DASH_Driver_Inputs(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_CTRL_ETAS_System(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ELLIPSE_EKF_Pos(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ELLIPSE_IMU_Accel(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ELLIPSE_EKF_Euler(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_CTRL_ELLIPSE_EKF_Vel(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_STAT_ELLIPSE_Status(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ELLIPSE_IMU_Gyro(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_CTRL_ELLIPSE_Vel_Valid(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ETAS_Inverter_R_Data(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ETAS_Inverter_L_Data(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ETAS_VDC_Suspe(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_PROC_ETAS_VDC_Tq(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_RAW_RECU_Data(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_STAT_FECU_Keep_Alive(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_STAT_RECU_Keep_Alive(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_RAW_FECU_Data2(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_RAW_FECU_Data1(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);
void message_cantx_STAT_ETAS_Sync(CAN_TxHeaderTypeDef TxHeader, CAN_HandleTypeDef hcan, uint32_t TxMailbox, uint8_t *TxData);

//RX-----------------------------------------------------------------------------------------------------

void message_canrx_VECTOR__INDEPENDENT_SIG_MSG(uint8_t *RxData);
void message_canrx_STAT_BMS_AIRs_State(uint8_t *RxData);
void message_canrx_CTRL_CHARGER_AIRs_Request(uint8_t *RxData);
void message_canrx_STAT_CHARGER_Sync(uint8_t *RxData);
void message_canrx_PROC_ETAS_VDC_Params(uint8_t *RxData);
void message_canrx_PROC_ETAS_VDC_LapTiming(uint8_t *RxData);
void message_canrx_CTRL_BMS_Accu_Data(uint8_t *RxData);
void message_canrx_CTRL_BMS_Cell_Extremes(uint8_t *RxData);
void message_canrx_STAT_DASH_Keep_Alive(uint8_t *RxData);
void message_canrx_STAT_BMS_Keep_Alive(uint8_t *RxData);
void message_canrx_PROC_ETAS_TS_Data(uint8_t *RxData);
void message_canrx_PROC_ELLIPSE_Auto(uint8_t *RxData);
void message_canrx_CTRL_ELLIPSE_GPS_Vel(uint8_t *RxData);
void message_canrx_STAT_ETAS_Diagnostics(uint8_t *RxData);
void message_canrx_PROC_ETAS_VDC_Values(uint8_t *RxData);
void message_canrx_CTRL_DASH_Driver_Inputs(uint8_t *RxData);
void message_canrx_CTRL_ETAS_System(uint8_t *RxData);
void message_canrx_PROC_ELLIPSE_EKF_Pos(uint8_t *RxData);
void message_canrx_PROC_ELLIPSE_IMU_Accel(uint8_t *RxData);
void message_canrx_PROC_ELLIPSE_EKF_Euler(uint8_t *RxData);
void message_canrx_CTRL_ELLIPSE_EKF_Vel(uint8_t *RxData);
void message_canrx_STAT_ELLIPSE_Status(uint8_t *RxData);
void message_canrx_PROC_ELLIPSE_IMU_Gyro(uint8_t *RxData);
void message_canrx_CTRL_ELLIPSE_Vel_Valid(uint8_t *RxData);
void message_canrx_PROC_ETAS_Inverter_R_Data(uint8_t *RxData);
void message_canrx_PROC_ETAS_Inverter_L_Data(uint8_t *RxData);
void message_canrx_PROC_ETAS_VDC_Suspe(uint8_t *RxData);
void message_canrx_PROC_ETAS_VDC_Tq(uint8_t *RxData);
void message_canrx_RAW_RECU_Data(uint8_t *RxData);
void message_canrx_STAT_FECU_Keep_Alive(uint8_t *RxData);
void message_canrx_STAT_RECU_Keep_Alive(uint8_t *RxData);
void message_canrx_RAW_FECU_Data2(uint8_t *RxData);
void message_canrx_RAW_FECU_Data1(uint8_t *RxData);
void message_canrx_STAT_ETAS_Sync(uint8_t *RxData);

#endif /* INC_CAN_X_2025_C_ */