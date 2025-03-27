#ifndef INC_CAN_Y_2025_H_
#define INC_CAN_Y_2025_H_

#include "main.h"

// Variables globals
extern CAN_TxHeaderTypeDef TxHeader;
extern uint32_t TxMailbox;
extern uint8_t TxData[8];

//Variables----------------------------------------------------------------------------------------------

extern uint8_t Disconnection_Pitot;
extern uint8_t Disconnection_BrakePressure;
extern uint8_t Disconnection_DashBoard;
extern uint8_t Disconnection_BMS;
extern uint8_t Disconnection_Front;
extern uint8_t Disconnection_Rear;
extern uint8_t Disconnection_SteeringSensor;
extern uint8_t Disconnection_Susp_R_R;
extern uint8_t Disconnection_Susp_R_L;
extern uint8_t Disconnection_Susp_F_R;
extern uint8_t Disconnection_Susp_F_L;
extern uint8_t Disconnection_BrakePedal;
extern uint8_t Disconnection_APPS2;
extern uint8_t Disconnection_APPS1;
extern uint8_t Disconnection_Ellipse;
extern uint16_t Inv_R_Enable;
extern uint16_t Inv_L_Enable;
extern uint8_t CustomMode_Identifier;
extern uint8_t CustomMode_Data;
extern uint8_t Torque_LockOn;
extern uint8_t Shutdown_PackageIntck;
extern uint8_t Shutdown_IMD;
extern uint8_t Shutdown_BMS;
extern uint8_t ERROR;
extern uint32_t Accumulator_Current;
extern uint16_t Lowest_CellVoltage;
extern uint16_t Highest_CellVoltage;
extern uint32_t Accumulator_Voltage;
extern uint16_t Charger_MaxVoltage;
extern uint8_t Charger_MaxCurrent;
extern uint16_t Lowest_CellTemp;
extern uint16_t Highest_CellTemp;
extern uint16_t Average_CellTemp;
extern uint8_t RacingMode;
extern uint8_t BMS_Alive;
extern uint8_t AIRs_State;
extern uint8_t Dash_Alive;
extern uint8_t PrechargeRequest;
extern uint8_t EnableDrive_Order;
extern uint8_t SoC_KF;
extern int8_t Speed;
extern uint16_t Precharge_Voltage;
extern uint8_t Precharge_Percentage;
extern uint8_t VDC_Max_Tyre_Slip;
extern uint8_t Car_State;
extern uint8_t AIRs_Request;
extern uint8_t InvertersAction;
extern uint8_t el_Vel_OK;
extern uint8_t TC_Warning;
extern uint8_t Regenerative_Enable;
extern uint8_t CriticalDisconnection;
extern uint8_t Relay_Error;
extern uint8_t Car_OK;
extern int16_t Power;
extern uint8_t Torque_OK;
extern uint8_t Sensorics_Mode;
extern uint8_t Critical_Signal_Disconnection;
extern uint8_t Critical_CAN_Disconnection;
extern uint8_t APPS_Implausibility;
extern uint8_t Sync_CAN1;
extern uint16_t ETAS_Sync_Y;
extern uint16_t Inv_R_TempMotor;
extern uint16_t Inv_R_TempIGBT;
extern int16_t Inv_R_Speed;
extern uint8_t Inv_R_RegID;
extern int16_t Inv_R_Iq;
extern int16_t Inv_R_Icommand;
extern int16_t Inv_R_Iactual;
extern uint16_t Inv_L_TempMotor;
extern uint16_t Inv_L_TempIGBT;
extern int16_t Inv_L_Speed;
extern int16_t Inv_L_Iq;
extern int16_t Inv_L_Icommand;
extern int16_t Inv_L_Iactual;
extern uint8_t Inv_L_RegID;
extern uint8_t Inverter_R_RegID;
extern uint8_t Inverter_R_b7tob0;
extern uint8_t Inverter_R_b15tob8;
extern uint8_t Inverter_L_RegID;
extern uint8_t Inverter_L_b7tob0;
extern uint8_t Inverter_L_b15tob8;

//Defines-----------------------------------------------------------------------------------------------

#define VECTOR__INDEPENDENT_SIG_MSG_id 3221225472;
#define STAT_ETAS_Sync_id 0;
#define CTRL_Inverter_R_Tx_id 181;
#define CTRL_Inverter_L_Tx_id 182;
#define CTRL_ETAS_Inverter_R_Rx_id 183;
#define CTRL_ETAS_Inverter_L_Rx_id 184;

//TX-----------------------------------------------------------------------------------------------------

void message_cantx_VECTOR__INDEPENDENT_SIG_MSG(CAN_HandleTypeDef hcan);
void message_cantx_STAT_ETAS_Sync(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_Inverter_R_Tx(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_Inverter_L_Tx(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_ETAS_Inverter_R_Rx(CAN_HandleTypeDef hcan);
void message_cantx_CTRL_ETAS_Inverter_L_Rx(CAN_HandleTypeDef hcan);

//RX-----------------------------------------------------------------------------------------------------

void message_canrx_VECTOR__INDEPENDENT_SIG_MSG(uint8_t *RxData);
void message_canrx_STAT_ETAS_Sync(uint8_t *RxData);
void message_canrx_CTRL_Inverter_R_Tx(uint8_t *RxData);
void message_canrx_CTRL_Inverter_L_Tx(uint8_t *RxData);
void message_canrx_CTRL_ETAS_Inverter_R_Rx(uint8_t *RxData);
void message_canrx_CTRL_ETAS_Inverter_L_Rx(uint8_t *RxData);

#endif /* INC_CAN_Y_2025_H_ */