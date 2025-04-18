#ifndef INC_CAN_X_2025_H_
#define INC_CAN_X_2025_H_

#include "main.h"

// Variables globals
extern CAN_TxHeaderTypeDef TxHeader;
extern uint32_t TxMailbox;
extern uint8_t TxData[8];

//Variables----------------------------------------------------------------------------------------------

extern int8_t New_Signal_193;
extern uint8_t el_AUTO_STATUS;
extern int8_t Inv_R_Iq;
extern int8_t Inv_R_Icommand;
extern int8_t Inv_R_Iactual;
extern int8_t Inv_L_Iq;
extern int8_t Inv_L_Icommand;
extern int8_t Inv_L_Iactual;
extern uint16_t SOE;
extern uint16_t ETAS_MSG_Counter;
extern uint8_t BMS_Alive;
extern uint8_t BMS_Balancing_Enable;
extern uint8_t BMS_Charge_Flag;
extern uint8_t BMS_CAN_Disconnection;
extern uint8_t BMS_Voltage_Disconnection;
extern uint8_t BMS_NTC_Disconnection;
extern uint8_t BMS_Current_Disconnection;
extern uint8_t BMS_Undertemperature;
extern uint8_t BMS_Overtemperature;
extern uint8_t BMS_Overvoltage;
extern uint8_t BMS_Undervoltage;
extern uint8_t Precharge_State;
extern uint8_t AIR_Plus_State;
extern uint8_t AIR_Minus_State;
extern uint8_t Shutdown_PackageIntck;
extern uint32_t Charger_Accumulator_Current;
extern uint16_t Charger_Lowest_Cell_Temperature;
extern uint16_t Charger_Highest_Cell_Temperature;
extern uint16_t Charger_Average_Cell_Temperature;
extern uint32_t Charger_Acumulator_Voltage;
extern uint16_t Charger_Highest_Cell_Voltage;
extern uint16_t Charger_Lowest_Cell_Voltage;
extern uint8_t Charger_PrechargeOK;
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
extern uint16_t Accumulator_Voltage;
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
extern uint8_t IMD_OK;
extern uint8_t BMS_OK;
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
extern uint8_t Fans_R;
extern uint8_t Fans_L;
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
extern uint8_t ETAS_Sync_X;

//Defines-----------------------------------------------------------------------------------------------

#define VECTOR__INDEPENDENT_SIG_MSG_id 3221225472;
#define NM_BMS_Charger_Keep_Alive_id 159;
#define STAT_BMS_SFR_id 149;
#define CHARGER_Battery_Current_id 148;
#define STAT_CHARGER_Battery_Temp_id 147;
#define STAT_CHARGER_Battery_Voltages_id 146;
#define STAT_CHARGER_PrechargeOK_id 271;
#define STAT_BMS_AIRs_State_id 145;
#define CTRL_CHARGER_AIRs_Request_id 144;
#define STAT_CHARGER_Sync_id 128;
#define PROC_ETAS_VDC_Params_id 9;
#define PROC_ETAS_VDC_LapTiming_id 8;
#define CTRL_BMS_Accu_Data_id 34;
#define CTRL_BMS_Cell_Extremes_id 35;
#define STAT_DASH_Keep_Alive_id 48;
#define STAT_BMS_Keep_Alive_id 32;
#define PROC_ETAS_TS_Data_id 5;
#define PROC_ELLIPSE_Auto_id 88;
#define CTRL_ELLIPSE_GPS_Vel_id 82;
#define STAT_ETAS_Diagnostics_id 1;
#define PROC_ETAS_VDC_Values_id 6;
#define CTRL_DASH_Driver_Inputs_id 49;
#define CTRL_ETAS_System_id 2;
#define PROC_ELLIPSE_EKF_Pos_id 85;
#define PROC_ELLIPSE_IMU_Accel_id 84;
#define PROC_ELLIPSE_EKF_Euler_id 86;
#define CTRL_ELLIPSE_EKF_Vel_id 81;
#define STAT_ELLIPSE_Status_id 80;
#define PROC_ELLIPSE_IMU_Gyro_id 87;
#define CTRL_ELLIPSE_Vel_Valid_id 83;
#define PROC_ETAS_Inverter_R_Data_id 4;
#define PROC_ETAS_Inverter_L_Data_id 3;
#define PROC_ETAS_VDC_Suspe_id 10;
#define PROC_ETAS_VDC_Tq_id 7;
#define RAW_RECU_Data_id 113;
#define STAT_FECU_Keep_Alive_id 64;
#define STAT_RECU_Keep_Alive_id 112;
#define RAW_FECU_Data2_id 66;
#define RAW_FECU_Data1_id 65;
#define STAT_ETAS_Sync_id 0;

//TX-----------------------------------------------------------------------------------------------------

void message_cantx_VECTOR__INDEPENDENT_SIG_MSG(CAN_HandleTypeDef hcan);
void message_cantx_NM_BMS_Charger_Keep_Alive(CAN_HandleTypeDef hcan);
void message_cantx_STAT_BMS_SFR(CAN_HandleTypeDef hcan);
void message_cantx_CHARGER_Battery_Current(CAN_HandleTypeDef hcan);
void message_cantx_STAT_CHARGER_Battery_Temp(CAN_HandleTypeDef hcan);
void message_cantx_STAT_CHARGER_Battery_Voltages(CAN_HandleTypeDef hcan);
void message_cantx_STAT_CHARGER_PrechargeOK(CAN_HandleTypeDef hcan);
void message_cantx_STAT_BMS_AIRs_State(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_CHARGER_AIRs_Request(CAN_HandleTypeDef hcan);
void message_cantx_STAT_CHARGER_Sync(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ETAS_VDC_Params(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ETAS_VDC_LapTiming(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_BMS_Accu_Data(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_BMS_Cell_Extremes(CAN_HandleTypeDef hcan);
void message_cantx_STAT_DASH_Keep_Alive(CAN_HandleTypeDef hcan);
void message_cantx_STAT_BMS_Keep_Alive(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ETAS_TS_Data(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ELLIPSE_Auto(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_ELLIPSE_GPS_Vel(CAN_HandleTypeDef hcan);
void message_cantx_STAT_ETAS_Diagnostics(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ETAS_VDC_Values(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_DASH_Driver_Inputs(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_ETAS_System(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ELLIPSE_EKF_Pos(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ELLIPSE_IMU_Accel(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ELLIPSE_EKF_Euler(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_ELLIPSE_EKF_Vel(CAN_HandleTypeDef hcan);
void message_cantx_STAT_ELLIPSE_Status(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ELLIPSE_IMU_Gyro(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_ELLIPSE_Vel_Valid(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ETAS_Inverter_R_Data(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ETAS_Inverter_L_Data(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ETAS_VDC_Suspe(CAN_HandleTypeDef hcan);
void message_cantx_PROC_ETAS_VDC_Tq(CAN_HandleTypeDef hcan);
void message_cantx_RAW_RECU_Data(CAN_HandleTypeDef hcan);
void message_cantx_STAT_FECU_Keep_Alive(CAN_HandleTypeDef hcan);
void message_cantx_STAT_RECU_Keep_Alive(CAN_HandleTypeDef hcan);
void message_cantx_RAW_FECU_Data2(CAN_HandleTypeDef hcan);
void message_cantx_RAW_FECU_Data1(CAN_HandleTypeDef hcan);
void message_cantx_STAT_ETAS_Sync(CAN_HandleTypeDef hcan);

//RX-----------------------------------------------------------------------------------------------------

void message_canrx_VECTOR__INDEPENDENT_SIG_MSG(uint8_t *RxData);
void message_canrx_NM_BMS_Charger_Keep_Alive(uint8_t *RxData);
void message_canrx_STAT_BMS_SFR(uint8_t *RxData);
void message_canrx_CHARGER_Battery_Current(uint8_t *RxData);
void message_canrx_STAT_CHARGER_Battery_Temp(uint8_t *RxData);
void message_canrx_STAT_CHARGER_Battery_Voltages(uint8_t *RxData);
void message_canrx_STAT_CHARGER_PrechargeOK(uint8_t *RxData);
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

#endif /* INC_CAN_X_2025_H_ */