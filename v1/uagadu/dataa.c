#include "dataa.h"

// Variables globals
CAN_TxHeaderTypeDef TxHeader = {0};
uint32_t TxMailbox = 0;
uint8_t TxData[8] = {0};

//Variables----------------------------------------------------------------------------------------------

uint8_t S1_C4_V_R_err;
uint8_t S1_C4_V_OW_err;
uint16_t S1_C4_V;
uint8_t S1_C3_V_R_err;
uint8_t S1_C3_V_OW_err;
uint16_t S1_C3_V;
uint8_t S1_C2_V_R_err;
uint8_t S1_C2_V_OW_err;
uint16_t S1_C2_V;
uint8_t S1_C1_V_R_err;
uint8_t S1_C1_V_OW_err;
uint16_t S1_C1_V;
uint8_t S1_C8_V_R_err;
uint8_t S1_C8_V_OW_err;
uint16_t S1_C8_V;
uint8_t S1_C7_V_R_err;
uint8_t S1_C7_V_OW_err;
uint16_t S1_C7_V;
uint8_t S1_C6_V_R_err;
uint8_t S1_C6_V_OW_err;
uint16_t S1_C6_V;
uint8_t S1_C5_V_R_err;
uint8_t S1_C5_V_OW_err;
uint16_t S1_C5_V;
uint8_t S1_C12_V_R_err;
uint8_t S1_C12_V_OW_err;
uint16_t S1_C12_V;
uint8_t S1_C11_V_R_err;
uint8_t S1_C11_V_OW_err;
uint16_t S1_C11_V;
uint8_t S1_C10_V_R_err;
uint8_t S1_C10_V_OW_err;
uint16_t S1_C10_V;
uint8_t S1_C9_V_R_err;
uint8_t S1_C9_V_OW_err;
uint16_t S1_C9_V;
uint8_t S1_C16_V_R_err;
uint8_t S1_C16_V_OW_err;
uint16_t S1_C16_V;
uint8_t S1_C15_V_R_err;
uint8_t S1_C15_V_OW_err;
uint16_t S1_C15_V;
uint8_t S1_C14_V_R_err;
uint8_t S1_C14_V_OW_err;
uint16_t S1_C14_V;
uint8_t S1_C13_V_R_err;
uint8_t S1_C13_V_OW_err;
uint16_t S1_C13_V;
uint8_t S2_C4_V_R_err;
uint8_t S2_C4_V_OW_err;
uint16_t S2_C4_V;
uint8_t S2_C3_V_R_err;
uint8_t S2_C3_V_OW_err;
uint16_t S2_C3_V;
uint8_t S2_C2_V_R_err;
uint8_t S2_C2_V_OW_err;
uint16_t S2_C2_V;
uint8_t S2_C1_V_R_err;
uint8_t S2_C1_V_OW_err;
uint16_t S2_C1_V;
uint8_t S2_C8_V_R_err;
uint8_t S2_C8_V_OW_err;
uint16_t S2_C8_V;
uint8_t S2_C7_V_R_err;
uint8_t S2_C7_V_OW_err;
uint16_t S2_C7_V;
uint8_t S2_C6_V_R_err;
uint8_t S2_C6_V_OW_err;
uint16_t S2_C6_V;
uint8_t S2_C5_V_R_err;
uint8_t S2_C5_V_OW_err;
uint16_t S2_C5_V;
uint8_t S2_C12_V_R_err;
uint8_t S2_C12_V_OW_err;
uint16_t S2_C12_V;
uint8_t S2_C11_V_R_err;
uint8_t S2_C11_V_OW_err;
uint16_t S2_C11_V;
uint8_t S2_C10_V_R_err;
uint8_t S2_C10_V_OW_err;
uint16_t S2_C10_V;
uint8_t S2_C9_V_R_err;
uint8_t S2_C9_V_OW_err;
uint16_t S2_C9_V;
uint8_t S2_C16_V_R_err;
uint8_t S2_C16_V_OW_err;
uint16_t S2_C16_V;
uint8_t S2_C15_V_R_err;
uint8_t S2_C15_V_OW_err;
uint16_t S2_C15_V;
uint8_t S2_C14_V_R_err;
uint8_t S2_C14_V_OW_err;
uint16_t S2_C14_V;
uint8_t S2_C13_V_R_err;
uint8_t S2_C13_V_OW_err;
uint16_t S2_C13_V;
uint8_t S3_C4_V_R_err;
uint8_t S3_C4_V_OW_err;
uint16_t S3_C4_V;
uint8_t S3_C3_V_R_err;
uint8_t S3_C3_V_OW_err;
uint16_t S3_C3_V;
uint8_t S3_C2_V_R_err;
uint8_t S3_C2_V_OW_err;
uint16_t S3_C2_V;
uint8_t S3_C1_V_R_err;
uint8_t S3_C1_V_OW_err;
uint16_t S3_C1_V;
uint8_t S3_C8_V_R_err;
uint8_t S3_C8_V_OW_err;
uint16_t S3_C8_V;
uint8_t S3_C7_V_R_err;
uint8_t S3_C7_V_OW_err;
uint16_t S3_C7_V;
uint8_t S3_C6_V_R_err;
uint8_t S3_C6_V_OW_err;
uint16_t S3_C6_V;
uint8_t S3_C5_V_R_err;
uint8_t S3_C5_V_OW_err;
uint16_t S3_C5_V;
uint8_t S3_C12_V_R_err;
uint8_t S3_C12_V_OW_err;
uint16_t S3_C12_V;
uint8_t S3_C11_V_R_err;
uint8_t S3_C11_V_OW_err;
uint16_t S3_C11_V;
uint8_t S3_C10_V_R_err;
uint8_t S3_C10_V_OW_err;
uint16_t S3_C10_V;
uint8_t S3_C9_V_R_err;
uint8_t S3_C9_V_OW_err;
uint16_t S3_C9_V;
uint8_t S3_C16_V_R_err;
uint8_t S3_C16_V_OW_err;
uint16_t S3_C16_V;
uint8_t S3_C15_V_R_err;
uint8_t S3_C15_V_OW_err;
uint16_t S3_C15_V;
uint8_t S3_C14_V_R_err;
uint8_t S3_C14_V_OW_err;
uint16_t S3_C14_V;
uint8_t S3_C13_V_R_err;
uint8_t S3_C13_V_OW_err;
uint16_t S3_C13_V;
uint8_t S4_C4_V_R_err;
uint8_t S4_C4_V_OW_err;
uint16_t S4_C4_V;
uint8_t S4_C3_V_R_err;
uint8_t S4_C3_V_OW_err;
uint16_t S4_C3_V;
uint8_t S4_C2_V_R_err;
uint8_t S4_C2_V_OW_err;
uint16_t S4_C2_V;
uint8_t S4_C1_V_R_err;
uint8_t S4_C1_V_OW_err;
uint16_t S4_C1_V;
uint8_t S4_C8_V_R_err;
uint8_t S4_C8_V_OW_err;
uint16_t S4_C8_V;
uint8_t S4_C7_V_R_err;
uint8_t S4_C7_V_OW_err;
uint16_t S4_C7_V;
uint8_t S4_C6_V_R_err;
uint8_t S4_C6_V_OW_err;
uint16_t S4_C6_V;
uint8_t S4_C5_V_R_err;
uint8_t S4_C5_V_OW_err;
uint16_t S4_C5_V;
uint8_t S4_C12_V_R_err;
uint8_t S4_C12_V_OW_err;
uint16_t S4_C12_V;
uint8_t S4_C11_V_R_err;
uint8_t S4_C11_V_OW_err;
uint16_t S4_C11_V;
uint8_t S4_C10_V_R_err;
uint8_t S4_C10_V_OW_err;
uint16_t S4_C10_V;
uint8_t S4_C9_V_R_err;
uint8_t S4_C9_V_OW_err;
uint16_t S4_C9_V;
uint8_t S4_C16_V_R_err;
uint8_t S4_C16_V_OW_err;
uint16_t S4_C16_V;
uint8_t S4_C15_V_R_err;
uint8_t S4_C15_V_OW_err;
uint16_t S4_C15_V;
uint8_t S4_C14_V_R_err;
uint8_t S4_C14_V_OW_err;
uint16_t S4_C14_V;
uint8_t S4_C13_V_R_err;
uint8_t S4_C13_V_OW_err;
uint16_t S4_C13_V;
uint8_t S5_C4_V_R_err;
uint8_t S5_C4_V_OW_err;
uint16_t S5_C4_V;
uint8_t S5_C3_V_R_err;
uint8_t S5_C3_V_OW_err;
uint16_t S5_C3_V;
uint8_t S5_C2_V_R_err;
uint8_t S5_C2_V_OW_err;
uint16_t S5_C2_V;
uint8_t S5_C1_V_R_err;
uint8_t S5_C1_V_OW_err;
uint16_t S5_C1_V;
uint8_t S5_C8_V_R_err;
uint8_t S5_C8_V_OW_err;
uint16_t S5_C8_V;
uint8_t S5_C7_V_R_err;
uint8_t S5_C7_V_OW_err;
uint16_t S5_C7_V;
uint8_t S5_C6_V_R_err;
uint8_t S5_C6_V_OW_err;
uint16_t S5_C6_V;
uint8_t S5_C5_V_R_err;
uint8_t S5_C5_V_OW_err;
uint16_t S5_C5_V;
uint8_t S5_C12_V_R_err;
uint8_t S5_C12_V_OW_err;
uint16_t S5_C12_V;
uint8_t S5_C11_V_R_err;
uint8_t S5_C11_V_OW_err;
uint16_t S5_C11_V;
uint8_t S5_C10_V_R_err;
uint8_t S5_C10_V_OW_err;
uint16_t S5_C10_V;
uint8_t S5_C9_V_R_err;
uint8_t S5_C9_V_OW_err;
uint16_t S5_C9_V;
uint8_t S5_C16_V_R_err;
uint8_t S5_C16_V_OW_err;
uint16_t S5_C16_V;
uint8_t S5_C15_V_R_err;
uint8_t S5_C15_V_OW_err;
uint16_t S5_C15_V;
uint8_t S5_C14_V_R_err;
uint8_t S5_C14_V_OW_err;
uint16_t S5_C14_V;
uint8_t S5_C13_V_R_err;
uint8_t S5_C13_V_OW_err;
uint16_t S5_C13_V;
uint8_t S6_C4_V_R_err;
uint8_t S6_C4_V_OW_err;
uint16_t S6_C4_V;
uint8_t S6_C3_V_R_err;
uint8_t S6_C3_V_OW_err;
uint16_t S6_C3_V;
uint8_t S6_C2_V_R_err;
uint8_t S6_C2_V_OW_err;
uint16_t S6_C2_V;
uint8_t S6_C1_V_R_err;
uint8_t S6_C1_V_OW_err;
uint16_t S6_C1_V;
uint8_t S6_C8_V_R_err;
uint8_t S6_C8_V_OW_err;
uint16_t S6_C8_V;
uint8_t S6_C7_V_R_err;
uint8_t S6_C7_V_OW_err;
uint16_t S6_C7_V;
uint8_t S6_C6_V_R_err;
uint8_t S6_C6_V_OW_err;
uint16_t S6_C6_V;
uint8_t S6_C5_V_R_err;
uint8_t S6_C5_V_OW_err;
uint16_t S6_C5_V;
uint8_t S6_C12_V_R_err;
uint8_t S6_C12_V_OW_err;
uint16_t S6_C12_V;
uint8_t S6_C11_V_R_err;
uint8_t S6_C11_V_OW_err;
uint16_t S6_C11_V;
uint8_t S6_C10_V_R_err;
uint8_t S6_C10_V_OW_err;
uint16_t S6_C10_V;
uint8_t S6_C9_V_R_err;
uint8_t S6_C9_V_OW_err;
uint16_t S6_C9_V;
uint8_t S6_C16_V_R_err;
uint8_t S6_C16_V_OW_err;
uint16_t S6_C16_V;
uint8_t S6_C15_V_R_err;
uint8_t S6_C15_V_OW_err;
uint16_t S6_C15_V;
uint8_t S6_C14_V_R_err;
uint8_t S6_C14_V_OW_err;
uint16_t S6_C14_V;
uint8_t S6_C13_V_R_err;
uint8_t S6_C13_V_OW_err;
uint16_t S6_C13_V;
uint8_t S7_C4_V_R_err;
uint8_t S7_C4_V_OW_err;
uint16_t S7_C4_V;
uint8_t S7_C3_V_R_err;
uint8_t S7_C3_V_OW_err;
uint16_t S7_C3_V;
uint8_t S7_C2_V_R_err;
uint8_t S7_C2_V_OW_err;
uint16_t S7_C2_V;
uint8_t S7_C1_V_R_err;
uint8_t S7_C1_V_OW_err;
uint16_t S7_C1_V;
uint8_t S7_C8_V_R_err;
uint8_t S7_C8_V_OW_err;
uint16_t S7_C8_V;
uint8_t S7_C7_V_R_err;
uint8_t S7_C7_V_OW_err;
uint16_t S7_C7_V;
uint8_t S7_C6_V_R_err;
uint8_t S7_C6_V_OW_err;
uint16_t S7_C6_V;
uint8_t S7_C5_V_R_err;
uint8_t S7_C5_V_OW_err;
uint16_t S7_C5_V;
uint8_t S7_C12_V_R_err;
uint8_t S7_C12_V_OW_err;
uint16_t S7_C12_V;
uint8_t S7_C11_V_R_err;
uint8_t S7_C11_V_OW_err;
uint16_t S7_C11_V;
uint8_t S7_C10_V_R_err;
uint8_t S7_C10_V_OW_err;
uint16_t S7_C10_V;
uint8_t S7_C9_V_R_err;
uint8_t S7_C9_V_OW_err;
uint16_t S7_C9_V;
uint8_t S7_C16_V_R_err;
uint8_t S7_C16_V_OW_err;
uint16_t S7_C16_V;
uint8_t S7_C15_V_R_err;
uint8_t S7_C15_V_OW_err;
uint16_t S7_C15_V;
uint8_t S7_C14_V_R_err;
uint8_t S7_C14_V_OW_err;
uint16_t S7_C14_V;
uint8_t S7_C13_V_R_err;
uint8_t S7_C13_V_OW_err;
uint16_t S7_C13_V;
uint8_t S8_C4_V_R_err;
uint8_t S8_C4_V_OW_err;
uint16_t S8_C4_V;
uint8_t S8_C3_V_R_err;
uint8_t S8_C3_V_OW_err;
uint16_t S8_C3_V;
uint8_t S8_C2_V_R_err;
uint8_t S8_C2_V_OW_err;
uint16_t S8_C2_V;
uint8_t S8_C1_V_R_err;
uint8_t S8_C1_V_OW_err;
uint16_t S8_C1_V;
uint8_t S8_C8_V_R_err;
uint8_t S8_C8_V_OW_err;
uint16_t S8_C8_V;
uint8_t S8_C7_V_R_err;
uint8_t S8_C7_V_OW_err;
uint16_t S8_C7_V;
uint8_t S8_C6_V_R_err;
uint8_t S8_C6_V_OW_err;
uint16_t S8_C6_V;
uint8_t S8_C5_V_R_err;
uint8_t S8_C5_V_OW_err;
uint16_t S8_C5_V;
uint8_t S8_C12_V_R_err;
uint8_t S8_C12_V_OW_err;
uint16_t S8_C12_V;
uint8_t S8_C11_V_R_err;
uint8_t S8_C11_V_OW_err;
uint16_t S8_C11_V;
uint8_t S8_C10_V_R_err;
uint8_t S8_C10_V_OW_err;
uint16_t S8_C10_V;
uint8_t S8_C9_V_R_err;
uint8_t S8_C9_V_OW_err;
uint16_t S8_C9_V;
uint8_t S8_C16_V_R_err;
uint8_t S8_C16_V_OW_err;
uint16_t S8_C16_V;
uint8_t S8_C15_V_R_err;
uint8_t S8_C15_V_OW_err;
uint16_t S8_C15_V;
uint8_t S8_C14_V_R_err;
uint8_t S8_C14_V_OW_err;
uint16_t S8_C14_V;
uint8_t S8_C13_V_R_err;
uint8_t S8_C13_V_OW_err;
uint16_t S8_C13_V;
uint8_t S9_C4_V_R_err;
uint8_t S9_C4_V_OW_err;
uint16_t S9_C4_V;
uint8_t S9_C3_V_R_err;
uint8_t S9_C3_V_OW_err;
uint16_t S9_C3_V;
uint8_t S9_C2_V_R_err;
uint8_t S9_C2_V_OW_err;
uint16_t S9_C2_V;
uint8_t S9_C1_V_R_err;
uint8_t S9_C1_V_OW_err;
uint16_t S9_C1_V;
uint8_t S9_C8_V_R_err;
uint8_t S9_C8_V_OW_err;
uint16_t S9_C8_V;
uint8_t S9_C7_V_R_err;
uint8_t S9_C7_V_OW_err;
uint16_t S9_C7_V;
uint8_t S9_C6_V_R_err;
uint8_t S9_C6_V_OW_err;
uint16_t S9_C6_V;
uint8_t S9_C5_V_R_err;
uint8_t S9_C5_V_OW_err;
uint16_t S9_C5_V;
uint8_t S9_C12_V_R_err;
uint8_t S9_C12_V_OW_err;
uint16_t S9_C12_V;
uint8_t S9_C11_V_R_err;
uint8_t S9_C11_V_OW_err;
uint16_t S9_C11_V;
uint8_t S9_C10_V_R_err;
uint8_t S9_C10_V_OW_err;
uint16_t S9_C10_V;
uint8_t S9_C9_V_R_err;
uint8_t S9_C9_V_OW_err;
uint16_t S9_C9_V;
uint8_t S9_C16_V_R_err;
uint8_t S9_C16_V_OW_err;
uint16_t S9_C16_V;
uint8_t S9_C15_V_R_err;
uint8_t S9_C15_V_OW_err;
uint16_t S9_C15_V;
uint8_t S9_C14_V_R_err;
uint8_t S9_C14_V_OW_err;
uint16_t S9_C14_V;
uint8_t S9_C13_V_R_err;
uint8_t S9_C13_V_OW_err;
uint16_t S9_C13_V;
uint8_t S1_T4_R_err;
uint8_t S1_T4_OW_err;
uint16_t S1_T4;
uint8_t S1_T3_R_err;
uint8_t S1_T3_OW_err;
uint16_t S1_T3;
uint8_t S1_T2_R_err;
uint8_t S1_T2_OW_err;
uint16_t S1_T2;
uint8_t S1_T1_R_err;
uint8_t S1_T1_OW_err;
uint16_t S1_T1;
uint8_t S1_T8_R_err;
uint8_t S1_T8_OW_err;
uint16_t S1_T8;
uint8_t S1_T7_R_err;
uint8_t S1_T7_OW_err;
uint16_t S1_T7;
uint8_t S1_T6_R_err;
uint8_t S1_T6_OW_err;
uint16_t S1_T6;
uint8_t S1_T5_R_err;
uint8_t S1_T5_OW_err;
uint16_t S1_T5;
uint8_t S2_T4_R_err;
uint8_t S2_T4_OW_err;
uint16_t S2_T4;
uint8_t S2_T3_R_err;
uint8_t S2_T3_OW_err;
uint16_t S2_T3;
uint8_t S2_T2_R_err;
uint8_t S2_T2_OW_err;
uint16_t S2_T2;
uint8_t S2_T1_R_err;
uint8_t S2_T1_OW_err;
uint16_t S2_T1;
uint8_t S2_T8_R_err;
uint8_t S2_T8_OW_err;
uint16_t S2_T8;
uint8_t S2_T7_R_err;
uint8_t S2_T7_OW_err;
uint16_t S2_T7;
uint8_t S2_T6_R_err;
uint8_t S2_T6_OW_err;
uint16_t S2_T6;
uint8_t S2_T5_R_err;
uint8_t S2_T5_OW_err;
uint16_t S2_T5;
uint8_t S3_T4_R_err;
uint8_t S3_T4_OW_err;
uint16_t S3_T4;
uint8_t S3_T3_R_err;
uint8_t S3_T3_OW_err;
uint16_t S3_T3;
uint8_t S3_T2_R_err;
uint8_t S3_T2_OW_err;
uint16_t S3_T2;
uint8_t S3_T1_R_err;
uint8_t S3_T1_OW_err;
uint16_t S3_T1;
uint8_t S3_T8_R_err;
uint8_t S3_T8_OW_err;
uint16_t S3_T8;
uint8_t S3_T7_R_err;
uint8_t S3_T7_OW_err;
uint16_t S3_T7;
uint8_t S3_T6_R_err;
uint8_t S3_T6_OW_err;
uint16_t S3_T6;
uint8_t S3_T5_R_err;
uint8_t S3_T5_OW_err;
uint16_t S3_T5;
uint8_t S4_T4_R_err;
uint8_t S4_T4_OW_err;
uint16_t S4_T4;
uint8_t S4_T3_R_err;
uint8_t S4_T3_OW_err;
uint16_t S4_T3;
uint8_t S4_T2_R_err;
uint8_t S4_T2_OW_err;
uint16_t S4_T2;
uint8_t S4_T1_R_err;
uint8_t S4_T1_OW_err;
uint16_t S4_T1;
uint8_t S4_T8_R_err;
uint8_t S4_T8_OW_err;
uint16_t S4_T8;
uint8_t S4_T7_R_err;
uint8_t S4_T7_OW_err;
uint16_t S4_T7;
uint8_t S4_T6_R_err;
uint8_t S4_T6_OW_err;
uint16_t S4_T6;
uint8_t S4_T5_R_err;
uint8_t S4_T5_OW_err;
uint16_t S4_T5;
uint8_t S5_T4_R_err;
uint8_t S5_T4_OW_err;
uint16_t S5_T4;
uint8_t S5_T3_R_err;
uint8_t S5_T3_OW_err;
uint16_t S5_T3;
uint8_t S5_T2_R_err;
uint8_t S5_T2_OW_err;
uint16_t S5_T2;
uint8_t S5_T1_R_err;
uint8_t S5_T1_OW_err;
uint16_t S5_T1;
uint8_t S5_T8_R_err;
uint8_t S5_T8_OW_err;
uint16_t S5_T8;
uint8_t S5_T7_R_err;
uint8_t S5_T7_OW_err;
uint16_t S5_T7;
uint8_t S5_T6_R_err;
uint8_t S5_T6_OW_err;
uint16_t S5_T6;
uint8_t S5_T5_R_err;
uint8_t S5_T5_OW_err;
uint16_t S5_T5;
uint8_t S6_T4_R_err;
uint8_t S6_T4_OW_err;
uint16_t S6_T4;
uint8_t S6_T3_R_err;
uint8_t S6_T3_OW_err;
uint16_t S6_T3;
uint8_t S6_T2_R_err;
uint8_t S6_T2_OW_err;
uint16_t S6_T2;
uint8_t S6_T1_R_err;
uint8_t S6_T1_OW_err;
uint16_t S6_T1;
uint8_t S6_T8_R_err;
uint8_t S6_T8_OW_err;
uint16_t S6_T8;
uint8_t S6_T7_R_err;
uint8_t S6_T7_OW_err;
uint16_t S6_T7;
uint8_t S6_T6_R_err;
uint8_t S6_T6_OW_err;
uint16_t S6_T6;
uint8_t S6_T5_R_err;
uint8_t S6_T5_OW_err;
uint16_t S6_T5;
uint8_t S7_T4_R_err;
uint8_t S7_T4_OW_err;
uint16_t S7_T4;
uint8_t S7_T3_R_err;
uint8_t S7_T3_OW_err;
uint16_t S7_T3;
uint8_t S7_T2_R_err;
uint8_t S7_T2_OW_err;
uint16_t S7_T2;
uint8_t S7_T1_R_err;
uint8_t S7_T1_OW_err;
uint16_t S7_T1;
uint8_t S7_T8_R_err;
uint8_t S7_T8_OW_err;
uint16_t S7_T8;
uint8_t S7_T7_R_err;
uint8_t S7_T7_OW_err;
uint16_t S7_T7;
uint8_t S7_T6_R_err;
uint8_t S7_T6_OW_err;
uint16_t S7_T6;
uint8_t S7_T5_R_err;
uint8_t S7_T5_OW_err;
uint16_t S7_T5;
uint8_t S8_T4_R_err;
uint8_t S8_T4_OW_err;
uint16_t S8_T4;
uint8_t S8_T3_R_err;
uint8_t S8_T3_OW_err;
uint16_t S8_T3;
uint8_t S8_T2_R_err;
uint8_t S8_T2_OW_err;
uint16_t S8_T2;
uint8_t S8_T1_R_err;
uint8_t S8_T1_OW_err;
uint16_t S8_T1;
uint8_t S8_T8_R_err;
uint8_t S8_T8_OW_err;
uint16_t S8_T8;
uint8_t S8_T7_R_err;
uint8_t S8_T7_OW_err;
uint16_t S8_T7;
uint8_t S8_T6_R_err;
uint8_t S8_T6_OW_err;
uint16_t S8_T6;
uint8_t S8_T5_R_err;
uint8_t S8_T5_OW_err;
uint16_t S8_T5;
uint8_t S9_T4_R_err;
uint8_t S9_T4_OW_err;
uint16_t S9_T4;
uint8_t S9_T3_R_err;
uint8_t S9_T3_OW_err;
uint16_t S9_T3;
uint8_t S9_T2_R_err;
uint8_t S9_T2_OW_err;
uint16_t S9_T2;
uint8_t S9_T1_R_err;
uint8_t S9_T1_OW_err;
uint16_t S9_T1;
uint8_t S9_T8_R_err;
uint8_t S9_T8_OW_err;
uint16_t S9_T8;
uint8_t S9_T7_R_err;
uint8_t S9_T7_OW_err;
uint16_t S9_T7;
uint8_t S9_T6_R_err;
uint8_t S9_T6_OW_err;
uint16_t S9_T6;
uint8_t S9_T5_R_err;
uint8_t S9_T5_OW_err;
uint16_t S9_T5;
uint8_t S4_C16_Balnc;
uint8_t S4_C15_Balnc;
uint8_t S4_C14_Balnc;
uint8_t S4_C13_Balnc;
uint8_t S4_C12_Balnc;
uint8_t S4_C11_Balnc;
uint8_t S4_C10_Balnc;
uint8_t S4_C9_Balnc;
uint8_t S4_C8_Balnc;
uint8_t S4_C7_Balnc;
uint8_t S4_C6_Balnc;
uint8_t S4_C5_Balnc;
uint8_t S4_C4_Balnc;
uint8_t S4_C3_Balnc;
uint8_t S4_C2_Balnc;
uint8_t S4_C1_Balnc;
uint8_t S3_C16_Balnc;
uint8_t S3_C15_Balnc;
uint8_t S3_C14_Balnc;
uint8_t S3_C13_Balnc;
uint8_t S3_C12_Balnc;
uint8_t S3_C11_Balnc;
uint8_t S3_C10_Balnc;
uint8_t S3_C9_Balnc;
uint8_t S3_C8_Balnc;
uint8_t S3_C7_Balnc;
uint8_t S3_C6_Balnc;
uint8_t S3_C5_Balnc;
uint8_t S3_C4_Balnc;
uint8_t S3_C3_Balnc;
uint8_t S3_C2_Balnc;
uint8_t S3_C1_Balnc;
uint8_t S2_C16_Balnc;
uint8_t S2_C15_Balnc;
uint8_t S2_C14_Balnc;
uint8_t S2_C13_Balnc;
uint8_t S2_C12_Balnc;
uint8_t S2_C11_Balnc;
uint8_t S2_C10_Balnc;
uint8_t S2_C9_Balnc;
uint8_t S2_C8_Balnc;
uint8_t S2_C7_Balnc;
uint8_t S2_C6_Balnc;
uint8_t S2_C5_Balnc;
uint8_t S2_C4_Balnc;
uint8_t S2_C3_Balnc;
uint8_t S2_C2_Balnc;
uint8_t S2_C1_Balnc;
uint8_t S1_C16_Balnc;
uint8_t S1_C15_Balnc;
uint8_t S1_C14_Balnc;
uint8_t S1_C13_Balnc;
uint8_t S1_C12_Balnc;
uint8_t S1_C11_Balnc;
uint8_t S1_C10_Balnc;
uint8_t S1_C9_Balnc;
uint8_t S1_C8_Balnc;
uint8_t S1_C7_Balnc;
uint8_t S1_C6_Balnc;
uint8_t S1_C5_Balnc;
uint8_t S1_C4_Balnc;
uint8_t S1_C3_Balnc;
uint8_t S1_C2_Balnc;
uint8_t S1_C1_Balnc;
uint8_t S8_C16_Balnc;
uint8_t S8_C15_Balnc;
uint8_t S8_C14_Balnc;
uint8_t S8_C13_Balnc;
uint8_t S8_C12_Balnc;
uint8_t S8_C11_Balnc;
uint8_t S8_C10_Balnc;
uint8_t S8_C9_Balnc;
uint8_t S8_C8_Balnc;
uint8_t S8_C7_Balnc;
uint8_t S8_C6_Balnc;
uint8_t S8_C5_Balnc;
uint8_t S8_C4_Balnc;
uint8_t S8_C3_Balnc;
uint8_t S8_C2_Balnc;
uint8_t S8_C1_Balnc;
uint8_t S7_C16_Balnc;
uint8_t S7_C15_Balnc;
uint8_t S7_C14_Balnc;
uint8_t S7_C13_Balnc;
uint8_t S7_C12_Balnc;
uint8_t S7_C11_Balnc;
uint8_t S7_C10_Balnc;
uint8_t S7_C9_Balnc;
uint8_t S7_C8_Balnc;
uint8_t S7_C7_Balnc;
uint8_t S7_C6_Balnc;
uint8_t S7_C5_Balnc;
uint8_t S7_C4_Balnc;
uint8_t S7_C3_Balnc;
uint8_t S7_C2_Balnc;
uint8_t S7_C1_Balnc;
uint8_t S6_C16_Balnc;
uint8_t S6_C15_Balnc;
uint8_t S6_C14_Balnc;
uint8_t S6_C13_Balnc;
uint8_t S6_C12_Balnc;
uint8_t S6_C11_Balnc;
uint8_t S6_C10_Balnc;
uint8_t S6_C9_Balnc;
uint8_t S6_C8_Balnc;
uint8_t S6_C7_Balnc;
uint8_t S6_C6_Balnc;
uint8_t S6_C5_Balnc;
uint8_t S6_C4_Balnc;
uint8_t S6_C3_Balnc;
uint8_t S6_C2_Balnc;
uint8_t S6_C1_Balnc;
uint8_t S5_C16_Balnc;
uint8_t S5_C15_Balnc;
uint8_t S5_C14_Balnc;
uint8_t S5_C13_Balnc;
uint8_t S5_C12_Balnc;
uint8_t S5_C11_Balnc;
uint8_t S5_C10_Balnc;
uint8_t S5_C9_Balnc;
uint8_t S5_C8_Balnc;
uint8_t S5_C7_Balnc;
uint8_t S5_C6_Balnc;
uint8_t S5_C5_Balnc;
uint8_t S5_C4_Balnc;
uint8_t S5_C3_Balnc;
uint8_t S5_C2_Balnc;
uint8_t S5_C1_Balnc;
uint8_t S9_C16_Balnc;
uint8_t S9_C15_Balnc;
uint8_t S9_C14_Balnc;
uint8_t S9_C13_Balnc;
uint8_t S9_C12_Balnc;
uint8_t S9_C11_Balnc;
uint8_t S9_C10_Balnc;
uint8_t S9_C9_Balnc;
uint8_t S9_C8_Balnc;
uint8_t S9_C7_Balnc;
uint8_t S9_C6_Balnc;
uint8_t S9_C5_Balnc;
uint8_t S9_C4_Balnc;
uint8_t S9_C3_Balnc;
uint8_t S9_C2_Balnc;
uint8_t S9_C1_Balnc;

//Tx functions-------------------------------------------------------------------------------------------

void message_cantx_S1_Volt_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 256;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S1_C4_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S1_C4_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S1_C4_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S1_C4_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S1_C3_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S1_C3_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S1_C3_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S1_C3_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S1_C2_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S1_C2_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S1_C2_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S1_C2_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S1_C1_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S1_C1_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S1_C1_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S1_C1_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S1_Volt_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 257;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S1_C8_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S1_C8_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S1_C8_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S1_C8_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S1_C7_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S1_C7_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S1_C7_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S1_C7_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S1_C6_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S1_C6_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S1_C6_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S1_C6_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S1_C5_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S1_C5_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S1_C5_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S1_C5_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S1_Volt_3(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 258;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S1_C12_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S1_C12_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S1_C12_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S1_C12_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S1_C11_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S1_C11_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S1_C11_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S1_C11_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S1_C10_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S1_C10_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S1_C10_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S1_C10_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S1_C9_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S1_C9_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S1_C9_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S1_C9_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S1_Volt_4(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 259;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S1_C16_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S1_C16_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S1_C16_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S1_C16_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S1_C15_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S1_C15_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S1_C15_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S1_C15_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S1_C14_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S1_C14_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S1_C14_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S1_C14_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S1_C13_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S1_C13_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S1_C13_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S1_C13_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S2_Volt_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 260;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S2_C4_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S2_C4_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S2_C4_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S2_C4_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S2_C3_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S2_C3_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S2_C3_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S2_C3_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S2_C2_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S2_C2_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S2_C2_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S2_C2_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S2_C1_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S2_C1_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S2_C1_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S2_C1_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S2_Volt_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 261;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S2_C8_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S2_C8_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S2_C8_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S2_C8_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S2_C7_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S2_C7_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S2_C7_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S2_C7_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S2_C6_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S2_C6_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S2_C6_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S2_C6_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S2_C5_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S2_C5_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S2_C5_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S2_C5_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S2_Volt_3(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 262;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S2_C12_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S2_C12_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S2_C12_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S2_C12_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S2_C11_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S2_C11_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S2_C11_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S2_C11_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S2_C10_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S2_C10_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S2_C10_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S2_C10_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S2_C9_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S2_C9_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S2_C9_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S2_C9_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S2_Volt_4(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 263;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S2_C16_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S2_C16_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S2_C16_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S2_C16_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S2_C15_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S2_C15_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S2_C15_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S2_C15_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S2_C14_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S2_C14_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S2_C14_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S2_C14_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S2_C13_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S2_C13_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S2_C13_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S2_C13_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S3_Volt_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 264;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S3_C4_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S3_C4_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S3_C4_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S3_C4_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S3_C3_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S3_C3_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S3_C3_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S3_C3_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S3_C2_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S3_C2_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S3_C2_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S3_C2_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S3_C1_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S3_C1_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S3_C1_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S3_C1_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S3_Volt_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 265;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S3_C8_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S3_C8_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S3_C8_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S3_C8_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S3_C7_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S3_C7_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S3_C7_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S3_C7_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S3_C6_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S3_C6_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S3_C6_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S3_C6_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S3_C5_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S3_C5_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S3_C5_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S3_C5_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S3_Volt_3(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 266;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S3_C12_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S3_C12_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S3_C12_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S3_C12_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S3_C11_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S3_C11_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S3_C11_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S3_C11_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S3_C10_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S3_C10_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S3_C10_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S3_C10_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S3_C9_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S3_C9_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S3_C9_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S3_C9_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S3_Volt_4(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 267;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S3_C16_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S3_C16_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S3_C16_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S3_C16_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S3_C15_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S3_C15_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S3_C15_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S3_C15_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S3_C14_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S3_C14_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S3_C14_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S3_C14_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S3_C13_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S3_C13_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S3_C13_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S3_C13_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S4_Volt_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 268;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S4_C4_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S4_C4_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S4_C4_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S4_C4_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S4_C3_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S4_C3_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S4_C3_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S4_C3_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S4_C2_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S4_C2_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S4_C2_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S4_C2_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S4_C1_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S4_C1_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S4_C1_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S4_C1_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S4_Volt_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 269;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S4_C8_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S4_C8_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S4_C8_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S4_C8_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S4_C7_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S4_C7_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S4_C7_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S4_C7_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S4_C6_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S4_C6_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S4_C6_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S4_C6_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S4_C5_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S4_C5_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S4_C5_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S4_C5_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S4_Volt_3(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 270;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S4_C12_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S4_C12_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S4_C12_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S4_C12_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S4_C11_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S4_C11_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S4_C11_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S4_C11_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S4_C10_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S4_C10_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S4_C10_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S4_C10_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S4_C9_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S4_C9_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S4_C9_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S4_C9_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S4_Volt_4(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 271;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S4_C16_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S4_C16_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S4_C16_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S4_C16_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S4_C15_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S4_C15_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S4_C15_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S4_C15_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S4_C14_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S4_C14_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S4_C14_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S4_C14_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S4_C13_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S4_C13_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S4_C13_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S4_C13_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S5_Volt_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 272;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S5_C4_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S5_C4_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S5_C4_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S5_C4_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S5_C3_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S5_C3_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S5_C3_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S5_C3_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S5_C2_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S5_C2_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S5_C2_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S5_C2_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S5_C1_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S5_C1_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S5_C1_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S5_C1_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S5_Volt_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 273;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S5_C8_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S5_C8_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S5_C8_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S5_C8_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S5_C7_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S5_C7_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S5_C7_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S5_C7_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S5_C6_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S5_C6_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S5_C6_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S5_C6_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S5_C5_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S5_C5_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S5_C5_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S5_C5_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S5_Volt_3(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 274;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S5_C12_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S5_C12_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S5_C12_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S5_C12_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S5_C11_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S5_C11_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S5_C11_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S5_C11_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S5_C10_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S5_C10_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S5_C10_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S5_C10_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S5_C9_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S5_C9_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S5_C9_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S5_C9_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S5_Volt_4(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 275;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S5_C16_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S5_C16_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S5_C16_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S5_C16_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S5_C15_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S5_C15_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S5_C15_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S5_C15_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S5_C14_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S5_C14_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S5_C14_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S5_C14_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S5_C13_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S5_C13_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S5_C13_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S5_C13_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S6_Volt_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 276;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S6_C4_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S6_C4_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S6_C4_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S6_C4_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S6_C3_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S6_C3_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S6_C3_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S6_C3_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S6_C2_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S6_C2_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S6_C2_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S6_C2_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S6_C1_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S6_C1_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S6_C1_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S6_C1_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S6_Volt_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 277;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S6_C8_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S6_C8_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S6_C8_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S6_C8_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S6_C7_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S6_C7_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S6_C7_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S6_C7_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S6_C6_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S6_C6_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S6_C6_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S6_C6_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S6_C5_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S6_C5_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S6_C5_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S6_C5_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S6_Volt_3(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 278;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S6_C12_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S6_C12_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S6_C12_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S6_C12_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S6_C11_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S6_C11_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S6_C11_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S6_C11_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S6_C10_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S6_C10_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S6_C10_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S6_C10_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S6_C9_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S6_C9_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S6_C9_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S6_C9_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S6_Volt_4(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 279;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S6_C16_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S6_C16_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S6_C16_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S6_C16_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S6_C15_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S6_C15_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S6_C15_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S6_C15_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S6_C14_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S6_C14_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S6_C14_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S6_C14_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S6_C13_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S6_C13_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S6_C13_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S6_C13_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S7_Volt_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 280;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S7_C4_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S7_C4_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S7_C4_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S7_C4_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S7_C3_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S7_C3_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S7_C3_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S7_C3_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S7_C2_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S7_C2_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S7_C2_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S7_C2_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S7_C1_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S7_C1_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S7_C1_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S7_C1_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S7_Volt_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 281;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S7_C8_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S7_C8_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S7_C8_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S7_C8_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S7_C7_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S7_C7_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S7_C7_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S7_C7_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S7_C6_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S7_C6_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S7_C6_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S7_C6_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S7_C5_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S7_C5_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S7_C5_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S7_C5_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S7_Volt_3(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 282;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S7_C12_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S7_C12_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S7_C12_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S7_C12_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S7_C11_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S7_C11_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S7_C11_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S7_C11_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S7_C10_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S7_C10_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S7_C10_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S7_C10_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S7_C9_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S7_C9_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S7_C9_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S7_C9_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S7_Volt_4(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 283;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S7_C16_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S7_C16_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S7_C16_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S7_C16_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S7_C15_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S7_C15_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S7_C15_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S7_C15_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S7_C14_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S7_C14_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S7_C14_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S7_C14_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S7_C13_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S7_C13_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S7_C13_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S7_C13_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S8_Volt_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 284;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S8_C4_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S8_C4_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S8_C4_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S8_C4_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S8_C3_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S8_C3_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S8_C3_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S8_C3_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S8_C2_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S8_C2_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S8_C2_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S8_C2_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S8_C1_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S8_C1_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S8_C1_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S8_C1_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S8_Volt_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 285;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S8_C8_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S8_C8_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S8_C8_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S8_C8_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S8_C7_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S8_C7_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S8_C7_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S8_C7_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S8_C6_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S8_C6_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S8_C6_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S8_C6_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S8_C5_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S8_C5_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S8_C5_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S8_C5_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S8_Volt_3(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 286;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S8_C12_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S8_C12_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S8_C12_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S8_C12_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S8_C11_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S8_C11_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S8_C11_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S8_C11_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S8_C10_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S8_C10_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S8_C10_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S8_C10_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S8_C9_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S8_C9_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S8_C9_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S8_C9_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S8_Volt_4(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 287;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S8_C16_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S8_C16_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S8_C16_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S8_C16_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S8_C15_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S8_C15_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S8_C15_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S8_C15_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S8_C14_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S8_C14_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S8_C14_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S8_C14_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S8_C13_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S8_C13_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S8_C13_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S8_C13_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S9_Volt_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 288;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S9_C4_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S9_C4_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S9_C4_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S9_C4_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S9_C3_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S9_C3_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S9_C3_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S9_C3_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S9_C2_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S9_C2_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S9_C2_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S9_C2_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S9_C1_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S9_C1_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S9_C1_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S9_C1_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S9_Volt_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 289;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S9_C8_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S9_C8_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S9_C8_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S9_C8_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S9_C7_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S9_C7_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S9_C7_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S9_C7_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S9_C6_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S9_C6_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S9_C6_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S9_C6_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S9_C5_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S9_C5_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S9_C5_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S9_C5_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S9_Volt_3(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 290;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S9_C12_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S9_C12_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S9_C12_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S9_C12_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S9_C11_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S9_C11_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S9_C11_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S9_C11_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S9_C10_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S9_C10_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S9_C10_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S9_C10_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S9_C9_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S9_C9_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S9_C9_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S9_C9_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S9_Volt_4(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 291;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S9_C16_V_R_err >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S9_C16_V_OW_err >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~255) | (((S9_C16_V >> 6) << 0) & 255);
   TxData[7] = (TxData[7] & ~252) | ((S9_C16_V << 2) & 252); 
   TxData[5] = (TxData[5] & ~1) | (((S9_C15_V_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S9_C15_V_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~255) | (((S9_C15_V >> 6) << 0) & 255);
   TxData[5] = (TxData[5] & ~252) | ((S9_C15_V << 2) & 252); 
   TxData[3] = (TxData[3] & ~1) | (((S9_C14_V_R_err >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S9_C14_V_OW_err >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~255) | (((S9_C14_V >> 6) << 0) & 255);
   TxData[3] = (TxData[3] & ~252) | ((S9_C14_V << 2) & 252); 
   TxData[1] = (TxData[1] & ~1) | (((S9_C13_V_R_err >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S9_C13_V_OW_err >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~255) | (((S9_C13_V >> 6) << 0) & 255);
   TxData[1] = (TxData[1] & ~252) | ((S9_C13_V << 2) & 252); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S1_Temp_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 304;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S1_T4_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S1_T4_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S1_T4 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S1_T4 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S1_T3_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S1_T3_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S1_T3 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S1_T3 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S1_T2_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S1_T2_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S1_T2 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S1_T2 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S1_T1_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S1_T1_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S1_T1 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S1_T1 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S1_Temp_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 305;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S1_T8_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S1_T8_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S1_T8 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S1_T8 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S1_T7_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S1_T7_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S1_T7 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S1_T7 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S1_T6_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S1_T6_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S1_T6 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S1_T6 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S1_T5_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S1_T5_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S1_T5 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S1_T5 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S2_Temp_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 306;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S2_T4_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S2_T4_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S2_T4 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S2_T4 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S2_T3_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S2_T3_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S2_T3 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S2_T3 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S2_T2_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S2_T2_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S2_T2 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S2_T2 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S2_T1_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S2_T1_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S2_T1 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S2_T1 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S2_Temp_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 307;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S2_T8_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S2_T8_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S2_T8 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S2_T8 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S2_T7_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S2_T7_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S2_T7 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S2_T7 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S2_T6_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S2_T6_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S2_T6 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S2_T6 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S2_T5_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S2_T5_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S2_T5 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S2_T5 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S3_Temp_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 308;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S3_T4_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S3_T4_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S3_T4 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S3_T4 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S3_T3_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S3_T3_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S3_T3 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S3_T3 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S3_T2_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S3_T2_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S3_T2 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S3_T2 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S3_T1_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S3_T1_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S3_T1 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S3_T1 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S3_Temp_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 309;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S3_T8_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S3_T8_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S3_T8 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S3_T8 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S3_T7_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S3_T7_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S3_T7 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S3_T7 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S3_T6_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S3_T6_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S3_T6 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S3_T6 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S3_T5_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S3_T5_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S3_T5 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S3_T5 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S4_Temp_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 310;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S4_T4_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S4_T4_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S4_T4 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S4_T4 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S4_T3_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S4_T3_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S4_T3 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S4_T3 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S4_T2_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S4_T2_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S4_T2 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S4_T2 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S4_T1_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S4_T1_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S4_T1 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S4_T1 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S4_Temp_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 311;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S4_T8_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S4_T8_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S4_T8 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S4_T8 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S4_T7_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S4_T7_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S4_T7 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S4_T7 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S4_T6_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S4_T6_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S4_T6 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S4_T6 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S4_T5_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S4_T5_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S4_T5 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S4_T5 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S5_Temp_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 312;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S5_T4_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S5_T4_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S5_T4 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S5_T4 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S5_T3_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S5_T3_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S5_T3 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S5_T3 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S5_T2_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S5_T2_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S5_T2 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S5_T2 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S5_T1_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S5_T1_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S5_T1 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S5_T1 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S5_Temp_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 313;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S5_T8_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S5_T8_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S5_T8 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S5_T8 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S5_T7_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S5_T7_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S5_T7 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S5_T7 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S5_T6_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S5_T6_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S5_T6 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S5_T6 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S5_T5_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S5_T5_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S5_T5 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S5_T5 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S6_Temp_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 314;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S6_T4_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S6_T4_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S6_T4 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S6_T4 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S6_T3_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S6_T3_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S6_T3 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S6_T3 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S6_T2_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S6_T2_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S6_T2 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S6_T2 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S6_T1_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S6_T1_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S6_T1 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S6_T1 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S6_Temp_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 315;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S6_T8_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S6_T8_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S6_T8 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S6_T8 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S6_T7_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S6_T7_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S6_T7 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S6_T7 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S6_T6_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S6_T6_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S6_T6 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S6_T6 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S6_T5_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S6_T5_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S6_T5 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S6_T5 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S7_Temp_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 316;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S7_T4_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S7_T4_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S7_T4 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S7_T4 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S7_T3_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S7_T3_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S7_T3 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S7_T3 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S7_T2_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S7_T2_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S7_T2 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S7_T2 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S7_T1_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S7_T1_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S7_T1 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S7_T1 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S7_Temp_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 317;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S7_T8_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S7_T8_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S7_T8 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S7_T8 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S7_T7_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S7_T7_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S7_T7 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S7_T7 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S7_T6_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S7_T6_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S7_T6 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S7_T6 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S7_T5_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S7_T5_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S7_T5 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S7_T5 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S8_Temp_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 318;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S8_T4_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S8_T4_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S8_T4 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S8_T4 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S8_T3_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S8_T3_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S8_T3 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S8_T3 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S8_T2_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S8_T2_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S8_T2 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S8_T2 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S8_T1_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S8_T1_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S8_T1 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S8_T1 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S8_Temp_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 319;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S8_T8_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S8_T8_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S8_T8 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S8_T8 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S8_T7_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S8_T7_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S8_T7 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S8_T7 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S8_T6_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S8_T6_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S8_T6 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S8_T6 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S8_T5_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S8_T5_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S8_T5 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S8_T5 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S9_Temp_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 320;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S9_T4_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S9_T4_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S9_T4 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S9_T4 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S9_T3_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S9_T3_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S9_T3 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S9_T3 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S9_T2_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S9_T2_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S9_T2 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S9_T2 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S9_T1_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S9_T1_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S9_T1 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S9_T1 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_S9_Temp_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 6;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 321;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[5] = (TxData[5] & ~1) | (((S9_T8_R_err >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S9_T8_OW_err >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~15) | (((S9_T8 >> 6) << 0) & 15);
   TxData[5] = (TxData[5] & ~252) | ((S9_T8 << 2) & 252); 
   TxData[4] = (TxData[4] & ~16) | (((S9_T7_R_err >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S9_T7_OW_err >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~255) | (((S9_T7 >> 2) << 0) & 255);
   TxData[4] = (TxData[4] & ~192) | ((S9_T7 << 6) & 192); 
   TxData[2] = (TxData[2] & ~1) | (((S9_T6_R_err >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S9_T6_OW_err >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~15) | (((S9_T6 >> 6) << 0) & 15);
   TxData[2] = (TxData[2] & ~252) | ((S9_T6 << 2) & 252); 
   TxData[1] = (TxData[1] & ~16) | (((S9_T5_R_err >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S9_T5_OW_err >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~255) | (((S9_T5 >> 2) << 0) & 255);
   TxData[1] = (TxData[1] & ~192) | ((S9_T5 << 6) & 192); 
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_Balancing_1(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 325;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S4_C16_Balnc >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S4_C15_Balnc >> 0) << 1) & 2);
   TxData[7] = (TxData[7] & ~4) | (((S4_C14_Balnc >> 0) << 2) & 4);
   TxData[7] = (TxData[7] & ~8) | (((S4_C13_Balnc >> 0) << 3) & 8);
   TxData[7] = (TxData[7] & ~16) | (((S4_C12_Balnc >> 0) << 4) & 16);
   TxData[7] = (TxData[7] & ~32) | (((S4_C11_Balnc >> 0) << 5) & 32);
   TxData[7] = (TxData[7] & ~64) | (((S4_C10_Balnc >> 0) << 6) & 64);
   TxData[7] = (TxData[7] & ~128) | (((S4_C9_Balnc >> 0) << 7) & 128);
   TxData[6] = (TxData[6] & ~1) | (((S4_C8_Balnc >> 0) << 0) & 1);
   TxData[6] = (TxData[6] & ~2) | (((S4_C7_Balnc >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~4) | (((S4_C6_Balnc >> 0) << 2) & 4);
   TxData[6] = (TxData[6] & ~8) | (((S4_C5_Balnc >> 0) << 3) & 8);
   TxData[6] = (TxData[6] & ~16) | (((S4_C4_Balnc >> 0) << 4) & 16);
   TxData[6] = (TxData[6] & ~32) | (((S4_C3_Balnc >> 0) << 5) & 32);
   TxData[6] = (TxData[6] & ~64) | (((S4_C2_Balnc >> 0) << 6) & 64);
   TxData[6] = (TxData[6] & ~128) | (((S4_C1_Balnc >> 0) << 7) & 128);
   TxData[5] = (TxData[5] & ~1) | (((S3_C16_Balnc >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S3_C15_Balnc >> 0) << 1) & 2);
   TxData[5] = (TxData[5] & ~4) | (((S3_C14_Balnc >> 0) << 2) & 4);
   TxData[5] = (TxData[5] & ~8) | (((S3_C13_Balnc >> 0) << 3) & 8);
   TxData[5] = (TxData[5] & ~16) | (((S3_C12_Balnc >> 0) << 4) & 16);
   TxData[5] = (TxData[5] & ~32) | (((S3_C11_Balnc >> 0) << 5) & 32);
   TxData[5] = (TxData[5] & ~64) | (((S3_C10_Balnc >> 0) << 6) & 64);
   TxData[5] = (TxData[5] & ~128) | (((S3_C9_Balnc >> 0) << 7) & 128);
   TxData[4] = (TxData[4] & ~1) | (((S3_C8_Balnc >> 0) << 0) & 1);
   TxData[4] = (TxData[4] & ~2) | (((S3_C7_Balnc >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~4) | (((S3_C6_Balnc >> 0) << 2) & 4);
   TxData[4] = (TxData[4] & ~8) | (((S3_C5_Balnc >> 0) << 3) & 8);
   TxData[4] = (TxData[4] & ~16) | (((S3_C4_Balnc >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S3_C3_Balnc >> 0) << 5) & 32);
   TxData[4] = (TxData[4] & ~64) | (((S3_C2_Balnc >> 0) << 6) & 64);
   TxData[4] = (TxData[4] & ~128) | (((S3_C1_Balnc >> 0) << 7) & 128);
   TxData[3] = (TxData[3] & ~1) | (((S2_C16_Balnc >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S2_C15_Balnc >> 0) << 1) & 2);
   TxData[3] = (TxData[3] & ~4) | (((S2_C14_Balnc >> 0) << 2) & 4);
   TxData[3] = (TxData[3] & ~8) | (((S2_C13_Balnc >> 0) << 3) & 8);
   TxData[3] = (TxData[3] & ~16) | (((S2_C12_Balnc >> 0) << 4) & 16);
   TxData[3] = (TxData[3] & ~32) | (((S2_C11_Balnc >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~64) | (((S2_C10_Balnc >> 0) << 6) & 64);
   TxData[3] = (TxData[3] & ~128) | (((S2_C9_Balnc >> 0) << 7) & 128);
   TxData[2] = (TxData[2] & ~1) | (((S2_C8_Balnc >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S2_C7_Balnc >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~4) | (((S2_C6_Balnc >> 0) << 2) & 4);
   TxData[2] = (TxData[2] & ~8) | (((S2_C5_Balnc >> 0) << 3) & 8);
   TxData[2] = (TxData[2] & ~16) | (((S2_C4_Balnc >> 0) << 4) & 16);
   TxData[2] = (TxData[2] & ~32) | (((S2_C3_Balnc >> 0) << 5) & 32);
   TxData[2] = (TxData[2] & ~64) | (((S2_C2_Balnc >> 0) << 6) & 64);
   TxData[2] = (TxData[2] & ~128) | (((S2_C1_Balnc >> 0) << 7) & 128);
   TxData[1] = (TxData[1] & ~1) | (((S1_C16_Balnc >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S1_C15_Balnc >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~4) | (((S1_C14_Balnc >> 0) << 2) & 4);
   TxData[1] = (TxData[1] & ~8) | (((S1_C13_Balnc >> 0) << 3) & 8);
   TxData[1] = (TxData[1] & ~16) | (((S1_C12_Balnc >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S1_C11_Balnc >> 0) << 5) & 32);
   TxData[1] = (TxData[1] & ~64) | (((S1_C10_Balnc >> 0) << 6) & 64);
   TxData[1] = (TxData[1] & ~128) | (((S1_C9_Balnc >> 0) << 7) & 128);
   TxData[0] = (TxData[0] & ~1) | (((S1_C8_Balnc >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~2) | (((S1_C7_Balnc >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~4) | (((S1_C6_Balnc >> 0) << 2) & 4);
   TxData[0] = (TxData[0] & ~8) | (((S1_C5_Balnc >> 0) << 3) & 8);
   TxData[0] = (TxData[0] & ~16) | (((S1_C4_Balnc >> 0) << 4) & 16);
   TxData[0] = (TxData[0] & ~32) | (((S1_C3_Balnc >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~64) | (((S1_C2_Balnc >> 0) << 6) & 64);
   TxData[0] = (TxData[0] & ~128) | (((S1_C1_Balnc >> 0) << 7) & 128);
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_Balancing_2(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 8;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 326;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[7] = (TxData[7] & ~1) | (((S8_C16_Balnc >> 0) << 0) & 1);
   TxData[7] = (TxData[7] & ~2) | (((S8_C15_Balnc >> 0) << 1) & 2);
   TxData[7] = (TxData[7] & ~4) | (((S8_C14_Balnc >> 0) << 2) & 4);
   TxData[7] = (TxData[7] & ~8) | (((S8_C13_Balnc >> 0) << 3) & 8);
   TxData[7] = (TxData[7] & ~16) | (((S8_C12_Balnc >> 0) << 4) & 16);
   TxData[7] = (TxData[7] & ~32) | (((S8_C11_Balnc >> 0) << 5) & 32);
   TxData[7] = (TxData[7] & ~64) | (((S8_C10_Balnc >> 0) << 6) & 64);
   TxData[7] = (TxData[7] & ~128) | (((S8_C9_Balnc >> 0) << 7) & 128);
   TxData[6] = (TxData[6] & ~1) | (((S8_C8_Balnc >> 0) << 0) & 1);
   TxData[6] = (TxData[6] & ~2) | (((S8_C7_Balnc >> 0) << 1) & 2);
   TxData[6] = (TxData[6] & ~4) | (((S8_C6_Balnc >> 0) << 2) & 4);
   TxData[6] = (TxData[6] & ~8) | (((S8_C5_Balnc >> 0) << 3) & 8);
   TxData[6] = (TxData[6] & ~16) | (((S8_C4_Balnc >> 0) << 4) & 16);
   TxData[6] = (TxData[6] & ~32) | (((S8_C3_Balnc >> 0) << 5) & 32);
   TxData[6] = (TxData[6] & ~64) | (((S8_C2_Balnc >> 0) << 6) & 64);
   TxData[6] = (TxData[6] & ~128) | (((S8_C1_Balnc >> 0) << 7) & 128);
   TxData[5] = (TxData[5] & ~1) | (((S7_C16_Balnc >> 0) << 0) & 1);
   TxData[5] = (TxData[5] & ~2) | (((S7_C15_Balnc >> 0) << 1) & 2);
   TxData[5] = (TxData[5] & ~4) | (((S7_C14_Balnc >> 0) << 2) & 4);
   TxData[5] = (TxData[5] & ~8) | (((S7_C13_Balnc >> 0) << 3) & 8);
   TxData[5] = (TxData[5] & ~16) | (((S7_C12_Balnc >> 0) << 4) & 16);
   TxData[5] = (TxData[5] & ~32) | (((S7_C11_Balnc >> 0) << 5) & 32);
   TxData[5] = (TxData[5] & ~64) | (((S7_C10_Balnc >> 0) << 6) & 64);
   TxData[5] = (TxData[5] & ~128) | (((S7_C9_Balnc >> 0) << 7) & 128);
   TxData[4] = (TxData[4] & ~1) | (((S7_C8_Balnc >> 0) << 0) & 1);
   TxData[4] = (TxData[4] & ~2) | (((S7_C7_Balnc >> 0) << 1) & 2);
   TxData[4] = (TxData[4] & ~4) | (((S7_C6_Balnc >> 0) << 2) & 4);
   TxData[4] = (TxData[4] & ~8) | (((S7_C5_Balnc >> 0) << 3) & 8);
   TxData[4] = (TxData[4] & ~16) | (((S7_C4_Balnc >> 0) << 4) & 16);
   TxData[4] = (TxData[4] & ~32) | (((S7_C3_Balnc >> 0) << 5) & 32);
   TxData[4] = (TxData[4] & ~64) | (((S7_C2_Balnc >> 0) << 6) & 64);
   TxData[4] = (TxData[4] & ~128) | (((S7_C1_Balnc >> 0) << 7) & 128);
   TxData[3] = (TxData[3] & ~1) | (((S6_C16_Balnc >> 0) << 0) & 1);
   TxData[3] = (TxData[3] & ~2) | (((S6_C15_Balnc >> 0) << 1) & 2);
   TxData[3] = (TxData[3] & ~4) | (((S6_C14_Balnc >> 0) << 2) & 4);
   TxData[3] = (TxData[3] & ~8) | (((S6_C13_Balnc >> 0) << 3) & 8);
   TxData[3] = (TxData[3] & ~16) | (((S6_C12_Balnc >> 0) << 4) & 16);
   TxData[3] = (TxData[3] & ~32) | (((S6_C11_Balnc >> 0) << 5) & 32);
   TxData[3] = (TxData[3] & ~64) | (((S6_C10_Balnc >> 0) << 6) & 64);
   TxData[3] = (TxData[3] & ~128) | (((S6_C9_Balnc >> 0) << 7) & 128);
   TxData[2] = (TxData[2] & ~1) | (((S6_C8_Balnc >> 0) << 0) & 1);
   TxData[2] = (TxData[2] & ~2) | (((S6_C7_Balnc >> 0) << 1) & 2);
   TxData[2] = (TxData[2] & ~4) | (((S6_C6_Balnc >> 0) << 2) & 4);
   TxData[2] = (TxData[2] & ~8) | (((S6_C5_Balnc >> 0) << 3) & 8);
   TxData[2] = (TxData[2] & ~16) | (((S6_C4_Balnc >> 0) << 4) & 16);
   TxData[2] = (TxData[2] & ~32) | (((S6_C3_Balnc >> 0) << 5) & 32);
   TxData[2] = (TxData[2] & ~64) | (((S6_C2_Balnc >> 0) << 6) & 64);
   TxData[2] = (TxData[2] & ~128) | (((S6_C1_Balnc >> 0) << 7) & 128);
   TxData[1] = (TxData[1] & ~1) | (((S5_C16_Balnc >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S5_C15_Balnc >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~4) | (((S5_C14_Balnc >> 0) << 2) & 4);
   TxData[1] = (TxData[1] & ~8) | (((S5_C13_Balnc >> 0) << 3) & 8);
   TxData[1] = (TxData[1] & ~16) | (((S5_C12_Balnc >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S5_C11_Balnc >> 0) << 5) & 32);
   TxData[1] = (TxData[1] & ~64) | (((S5_C10_Balnc >> 0) << 6) & 64);
   TxData[1] = (TxData[1] & ~128) | (((S5_C9_Balnc >> 0) << 7) & 128);
   TxData[0] = (TxData[0] & ~1) | (((S5_C8_Balnc >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~2) | (((S5_C7_Balnc >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~4) | (((S5_C6_Balnc >> 0) << 2) & 4);
   TxData[0] = (TxData[0] & ~8) | (((S5_C5_Balnc >> 0) << 3) & 8);
   TxData[0] = (TxData[0] & ~16) | (((S5_C4_Balnc >> 0) << 4) & 16);
   TxData[0] = (TxData[0] & ~32) | (((S5_C3_Balnc >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~64) | (((S5_C2_Balnc >> 0) << 6) & 64);
   TxData[0] = (TxData[0] & ~128) | (((S5_C1_Balnc >> 0) << 7) & 128);
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

void message_cantx_Balancing_3(CAN_HandleTypeDef hcan) {
   TxHeader.DLC = 2;
   TxHeader.IDE = 0;
   TxHeader.RTR = 0;
   TxHeader.StdId = 327;
   TxHeader.TransmitGlobalTime = DISABLE;
   TxData[1] = (TxData[1] & ~1) | (((S9_C16_Balnc >> 0) << 0) & 1);
   TxData[1] = (TxData[1] & ~2) | (((S9_C15_Balnc >> 0) << 1) & 2);
   TxData[1] = (TxData[1] & ~4) | (((S9_C14_Balnc >> 0) << 2) & 4);
   TxData[1] = (TxData[1] & ~8) | (((S9_C13_Balnc >> 0) << 3) & 8);
   TxData[1] = (TxData[1] & ~16) | (((S9_C12_Balnc >> 0) << 4) & 16);
   TxData[1] = (TxData[1] & ~32) | (((S9_C11_Balnc >> 0) << 5) & 32);
   TxData[1] = (TxData[1] & ~64) | (((S9_C10_Balnc >> 0) << 6) & 64);
   TxData[1] = (TxData[1] & ~128) | (((S9_C9_Balnc >> 0) << 7) & 128);
   TxData[0] = (TxData[0] & ~1) | (((S9_C8_Balnc >> 0) << 0) & 1);
   TxData[0] = (TxData[0] & ~2) | (((S9_C7_Balnc >> 0) << 1) & 2);
   TxData[0] = (TxData[0] & ~4) | (((S9_C6_Balnc >> 0) << 2) & 4);
   TxData[0] = (TxData[0] & ~8) | (((S9_C5_Balnc >> 0) << 3) & 8);
   TxData[0] = (TxData[0] & ~16) | (((S9_C4_Balnc >> 0) << 4) & 16);
   TxData[0] = (TxData[0] & ~32) | (((S9_C3_Balnc >> 0) << 5) & 32);
   TxData[0] = (TxData[0] & ~64) | (((S9_C2_Balnc >> 0) << 6) & 64);
   TxData[0] = (TxData[0] & ~128) | (((S9_C1_Balnc >> 0) << 7) & 128);
   if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK);
}

//Rx functions-------------------------------------------------------------------------------------------

void message_canrx_S1_Volt_1(uint8_t *RxData) {
   S1_C4_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S1_C4_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C4_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S1_C4_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C4_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S1_C4_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C3_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S1_C3_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C3_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S1_C3_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C3_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S1_C3_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C2_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S1_C2_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C2_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S1_C2_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C2_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S1_C2_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C1_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S1_C1_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C1_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S1_C1_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C1_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S1_C1_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S1_Volt_2(uint8_t *RxData) {
   S1_C8_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S1_C8_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C8_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S1_C8_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C8_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S1_C8_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C7_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S1_C7_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C7_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S1_C7_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C7_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S1_C7_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C6_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S1_C6_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C6_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S1_C6_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C6_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S1_C6_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C5_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S1_C5_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C5_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S1_C5_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C5_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S1_C5_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S1_Volt_3(uint8_t *RxData) {
   S1_C12_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S1_C12_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C12_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S1_C12_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C12_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S1_C12_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C11_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S1_C11_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C11_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S1_C11_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C11_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S1_C11_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C10_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S1_C10_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C10_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S1_C10_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C10_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S1_C10_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C9_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S1_C9_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C9_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S1_C9_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C9_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S1_C9_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S1_Volt_4(uint8_t *RxData) {
   S1_C16_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S1_C16_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C16_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S1_C16_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C16_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S1_C16_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C15_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S1_C15_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C15_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S1_C15_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C15_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S1_C15_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C14_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S1_C14_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C14_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S1_C14_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C14_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S1_C14_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S1_C13_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S1_C13_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C13_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S1_C13_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C13_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S1_C13_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S2_Volt_1(uint8_t *RxData) {
   S2_C4_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S2_C4_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C4_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S2_C4_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C4_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S2_C4_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C3_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S2_C3_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C3_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S2_C3_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C3_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S2_C3_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C2_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S2_C2_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C2_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S2_C2_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C2_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S2_C2_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C1_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S2_C1_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C1_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S2_C1_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C1_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S2_C1_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S2_Volt_2(uint8_t *RxData) {
   S2_C8_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S2_C8_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C8_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S2_C8_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C8_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S2_C8_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C7_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S2_C7_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C7_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S2_C7_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C7_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S2_C7_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C6_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S2_C6_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C6_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S2_C6_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C6_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S2_C6_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C5_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S2_C5_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C5_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S2_C5_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C5_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S2_C5_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S2_Volt_3(uint8_t *RxData) {
   S2_C12_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S2_C12_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C12_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S2_C12_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C12_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S2_C12_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C11_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S2_C11_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C11_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S2_C11_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C11_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S2_C11_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C10_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S2_C10_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C10_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S2_C10_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C10_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S2_C10_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C9_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S2_C9_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C9_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S2_C9_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C9_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S2_C9_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S2_Volt_4(uint8_t *RxData) {
   S2_C16_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S2_C16_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C16_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S2_C16_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C16_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S2_C16_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C15_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S2_C15_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C15_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S2_C15_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C15_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S2_C15_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C14_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S2_C14_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C14_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S2_C14_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C14_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S2_C14_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S2_C13_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S2_C13_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C13_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S2_C13_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C13_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S2_C13_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S3_Volt_1(uint8_t *RxData) {
   S3_C4_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S3_C4_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C4_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S3_C4_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C4_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S3_C4_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C3_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S3_C3_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C3_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S3_C3_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C3_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S3_C3_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C2_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S3_C2_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C2_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S3_C2_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C2_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S3_C2_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C1_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S3_C1_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C1_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S3_C1_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C1_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S3_C1_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S3_Volt_2(uint8_t *RxData) {
   S3_C8_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S3_C8_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C8_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S3_C8_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C8_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S3_C8_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C7_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S3_C7_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C7_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S3_C7_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C7_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S3_C7_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C6_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S3_C6_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C6_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S3_C6_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C6_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S3_C6_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C5_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S3_C5_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C5_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S3_C5_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C5_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S3_C5_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S3_Volt_3(uint8_t *RxData) {
   S3_C12_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S3_C12_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C12_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S3_C12_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C12_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S3_C12_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C11_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S3_C11_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C11_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S3_C11_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C11_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S3_C11_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C10_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S3_C10_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C10_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S3_C10_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C10_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S3_C10_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C9_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S3_C9_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C9_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S3_C9_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C9_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S3_C9_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S3_Volt_4(uint8_t *RxData) {
   S3_C16_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S3_C16_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C16_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S3_C16_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C16_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S3_C16_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C15_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S3_C15_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C15_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S3_C15_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C15_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S3_C15_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C14_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S3_C14_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C14_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S3_C14_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C14_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S3_C14_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S3_C13_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S3_C13_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C13_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S3_C13_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C13_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S3_C13_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S4_Volt_1(uint8_t *RxData) {
   S4_C4_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S4_C4_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C4_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S4_C4_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C4_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S4_C4_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C3_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S4_C3_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C3_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S4_C3_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C3_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S4_C3_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C2_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S4_C2_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C2_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S4_C2_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C2_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S4_C2_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C1_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S4_C1_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C1_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S4_C1_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C1_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S4_C1_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S4_Volt_2(uint8_t *RxData) {
   S4_C8_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S4_C8_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C8_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S4_C8_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C8_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S4_C8_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C7_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S4_C7_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C7_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S4_C7_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C7_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S4_C7_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C6_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S4_C6_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C6_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S4_C6_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C6_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S4_C6_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C5_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S4_C5_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C5_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S4_C5_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C5_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S4_C5_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S4_Volt_3(uint8_t *RxData) {
   S4_C12_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S4_C12_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C12_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S4_C12_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C12_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S4_C12_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C11_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S4_C11_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C11_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S4_C11_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C11_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S4_C11_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C10_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S4_C10_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C10_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S4_C10_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C10_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S4_C10_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C9_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S4_C9_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C9_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S4_C9_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C9_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S4_C9_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S4_Volt_4(uint8_t *RxData) {
   S4_C16_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S4_C16_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C16_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S4_C16_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C16_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S4_C16_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C15_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S4_C15_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C15_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S4_C15_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C15_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S4_C15_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C14_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S4_C14_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C14_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S4_C14_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C14_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S4_C14_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S4_C13_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S4_C13_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C13_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S4_C13_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C13_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S4_C13_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S5_Volt_1(uint8_t *RxData) {
   S5_C4_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S5_C4_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C4_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S5_C4_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C4_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S5_C4_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C3_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S5_C3_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C3_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S5_C3_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C3_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S5_C3_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C2_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S5_C2_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C2_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S5_C2_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C2_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S5_C2_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C1_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S5_C1_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C1_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S5_C1_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C1_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S5_C1_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S5_Volt_2(uint8_t *RxData) {
   S5_C8_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S5_C8_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C8_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S5_C8_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C8_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S5_C8_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C7_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S5_C7_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C7_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S5_C7_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C7_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S5_C7_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C6_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S5_C6_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C6_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S5_C6_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C6_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S5_C6_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C5_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S5_C5_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C5_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S5_C5_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C5_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S5_C5_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S5_Volt_3(uint8_t *RxData) {
   S5_C12_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S5_C12_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C12_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S5_C12_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C12_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S5_C12_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C11_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S5_C11_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C11_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S5_C11_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C11_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S5_C11_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C10_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S5_C10_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C10_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S5_C10_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C10_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S5_C10_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C9_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S5_C9_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C9_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S5_C9_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C9_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S5_C9_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S5_Volt_4(uint8_t *RxData) {
   S5_C16_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S5_C16_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C16_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S5_C16_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C16_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S5_C16_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C15_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S5_C15_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C15_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S5_C15_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C15_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S5_C15_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C14_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S5_C14_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C14_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S5_C14_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C14_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S5_C14_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S5_C13_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S5_C13_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C13_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S5_C13_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C13_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S5_C13_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S6_Volt_1(uint8_t *RxData) {
   S6_C4_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S6_C4_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C4_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S6_C4_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C4_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S6_C4_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C3_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S6_C3_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C3_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S6_C3_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C3_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S6_C3_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C2_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S6_C2_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C2_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S6_C2_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C2_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S6_C2_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C1_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S6_C1_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C1_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S6_C1_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C1_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S6_C1_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S6_Volt_2(uint8_t *RxData) {
   S6_C8_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S6_C8_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C8_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S6_C8_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C8_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S6_C8_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C7_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S6_C7_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C7_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S6_C7_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C7_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S6_C7_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C6_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S6_C6_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C6_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S6_C6_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C6_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S6_C6_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C5_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S6_C5_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C5_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S6_C5_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C5_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S6_C5_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S6_Volt_3(uint8_t *RxData) {
   S6_C12_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S6_C12_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C12_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S6_C12_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C12_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S6_C12_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C11_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S6_C11_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C11_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S6_C11_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C11_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S6_C11_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C10_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S6_C10_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C10_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S6_C10_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C10_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S6_C10_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C9_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S6_C9_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C9_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S6_C9_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C9_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S6_C9_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S6_Volt_4(uint8_t *RxData) {
   S6_C16_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S6_C16_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C16_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S6_C16_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C16_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S6_C16_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C15_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S6_C15_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C15_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S6_C15_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C15_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S6_C15_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C14_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S6_C14_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C14_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S6_C14_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C14_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S6_C14_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S6_C13_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S6_C13_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C13_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S6_C13_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C13_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S6_C13_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S7_Volt_1(uint8_t *RxData) {
   S7_C4_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S7_C4_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C4_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S7_C4_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C4_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S7_C4_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C3_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S7_C3_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C3_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S7_C3_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C3_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S7_C3_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C2_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S7_C2_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C2_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S7_C2_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C2_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S7_C2_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C1_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S7_C1_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C1_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S7_C1_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C1_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S7_C1_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S7_Volt_2(uint8_t *RxData) {
   S7_C8_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S7_C8_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C8_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S7_C8_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C8_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S7_C8_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C7_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S7_C7_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C7_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S7_C7_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C7_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S7_C7_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C6_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S7_C6_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C6_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S7_C6_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C6_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S7_C6_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C5_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S7_C5_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C5_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S7_C5_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C5_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S7_C5_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S7_Volt_3(uint8_t *RxData) {
   S7_C12_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S7_C12_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C12_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S7_C12_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C12_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S7_C12_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C11_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S7_C11_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C11_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S7_C11_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C11_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S7_C11_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C10_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S7_C10_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C10_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S7_C10_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C10_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S7_C10_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C9_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S7_C9_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C9_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S7_C9_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C9_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S7_C9_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S7_Volt_4(uint8_t *RxData) {
   S7_C16_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S7_C16_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C16_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S7_C16_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C16_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S7_C16_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C15_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S7_C15_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C15_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S7_C15_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C15_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S7_C15_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C14_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S7_C14_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C14_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S7_C14_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C14_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S7_C14_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S7_C13_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S7_C13_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C13_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S7_C13_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C13_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S7_C13_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S8_Volt_1(uint8_t *RxData) {
   S8_C4_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S8_C4_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C4_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S8_C4_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C4_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S8_C4_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C3_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S8_C3_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C3_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S8_C3_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C3_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S8_C3_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C2_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S8_C2_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C2_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S8_C2_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C2_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S8_C2_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C1_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S8_C1_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C1_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S8_C1_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C1_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S8_C1_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S8_Volt_2(uint8_t *RxData) {
   S8_C8_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S8_C8_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C8_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S8_C8_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C8_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S8_C8_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C7_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S8_C7_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C7_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S8_C7_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C7_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S8_C7_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C6_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S8_C6_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C6_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S8_C6_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C6_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S8_C6_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C5_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S8_C5_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C5_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S8_C5_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C5_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S8_C5_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S8_Volt_3(uint8_t *RxData) {
   S8_C12_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S8_C12_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C12_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S8_C12_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C12_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S8_C12_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C11_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S8_C11_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C11_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S8_C11_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C11_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S8_C11_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C10_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S8_C10_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C10_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S8_C10_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C10_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S8_C10_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C9_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S8_C9_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C9_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S8_C9_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C9_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S8_C9_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S8_Volt_4(uint8_t *RxData) {
   S8_C16_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S8_C16_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C16_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S8_C16_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C16_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S8_C16_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C15_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S8_C15_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C15_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S8_C15_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C15_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S8_C15_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C14_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S8_C14_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C14_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S8_C14_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C14_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S8_C14_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S8_C13_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S8_C13_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C13_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S8_C13_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C13_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S8_C13_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S9_Volt_1(uint8_t *RxData) {
   S9_C4_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S9_C4_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C4_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S9_C4_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C4_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S9_C4_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C3_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S9_C3_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C3_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S9_C3_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C3_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S9_C3_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C2_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S9_C2_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C2_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S9_C2_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C2_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S9_C2_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C1_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S9_C1_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C1_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S9_C1_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C1_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S9_C1_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S9_Volt_2(uint8_t *RxData) {
   S9_C8_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S9_C8_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C8_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S9_C8_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C8_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S9_C8_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C7_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S9_C7_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C7_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S9_C7_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C7_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S9_C7_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C6_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S9_C6_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C6_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S9_C6_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C6_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S9_C6_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C5_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S9_C5_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C5_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S9_C5_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C5_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S9_C5_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S9_Volt_3(uint8_t *RxData) {
   S9_C12_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S9_C12_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C12_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S9_C12_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C12_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S9_C12_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C11_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S9_C11_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C11_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S9_C11_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C11_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S9_C11_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C10_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S9_C10_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C10_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S9_C10_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C10_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S9_C10_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C9_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S9_C9_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C9_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S9_C9_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C9_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S9_C9_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S9_Volt_4(uint8_t *RxData) {
   S9_C16_V_R_err = ((RxData[7] & 1) >> 0);   // Signal: S9_C16_V_R_err Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C16_V_OW_err = ((RxData[7] & 2) >> 1);   // Signal: S9_C16_V_OW_err Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C16_V = ((RxData[6] & 255) << 6) | ((RxData[7] & 252) >> 2);   // Signal: S9_C16_V Start Bit: 55, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C15_V_R_err = ((RxData[5] & 1) >> 0);   // Signal: S9_C15_V_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C15_V_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S9_C15_V_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C15_V = ((RxData[4] & 255) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S9_C15_V Start Bit: 39, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C14_V_R_err = ((RxData[3] & 1) >> 0);   // Signal: S9_C14_V_R_err Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C14_V_OW_err = ((RxData[3] & 2) >> 1);   // Signal: S9_C14_V_OW_err Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C14_V = ((RxData[2] & 255) << 6) | ((RxData[3] & 252) >> 2);   // Signal: S9_C14_V Start Bit: 23, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
   S9_C13_V_R_err = ((RxData[1] & 1) >> 0);   // Signal: S9_C13_V_R_err Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C13_V_OW_err = ((RxData[1] & 2) >> 1);   // Signal: S9_C13_V_OW_err Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C13_V = ((RxData[0] & 255) << 6) | ((RxData[1] & 252) >> 2);   // Signal: S9_C13_V Start Bit: 7, Length: 14 Byte Order: 0, Value Type: + Factor: 0.00015 Offset: 2.3 Unit: V
}

void message_canrx_S1_Temp_1(uint8_t *RxData) {
   S1_T4_R_err = ((RxData[5] & 1) >> 0);   // Signal: S1_T4_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T4_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S1_T4_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T4 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S1_T4 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S1_T3_R_err = ((RxData[4] & 16) >> 4);   // Signal: S1_T3_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T3_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S1_T3_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T3 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S1_T3 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S1_T2_R_err = ((RxData[2] & 1) >> 0);   // Signal: S1_T2_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T2_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S1_T2_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T2 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S1_T2 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S1_T1_R_err = ((RxData[1] & 16) >> 4);   // Signal: S1_T1_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T1_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S1_T1_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T1 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S1_T1 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S1_Temp_2(uint8_t *RxData) {
   S1_T8_R_err = ((RxData[5] & 1) >> 0);   // Signal: S1_T8_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T8_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S1_T8_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T8 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S1_T8 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S1_T7_R_err = ((RxData[4] & 16) >> 4);   // Signal: S1_T7_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T7_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S1_T7_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T7 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S1_T7 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S1_T6_R_err = ((RxData[2] & 1) >> 0);   // Signal: S1_T6_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T6_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S1_T6_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T6 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S1_T6 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S1_T5_R_err = ((RxData[1] & 16) >> 4);   // Signal: S1_T5_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T5_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S1_T5_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_T5 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S1_T5 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S2_Temp_1(uint8_t *RxData) {
   S2_T4_R_err = ((RxData[5] & 1) >> 0);   // Signal: S2_T4_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T4_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S2_T4_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T4 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S2_T4 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S2_T3_R_err = ((RxData[4] & 16) >> 4);   // Signal: S2_T3_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T3_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S2_T3_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T3 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S2_T3 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S2_T2_R_err = ((RxData[2] & 1) >> 0);   // Signal: S2_T2_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T2_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S2_T2_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T2 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S2_T2 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S2_T1_R_err = ((RxData[1] & 16) >> 4);   // Signal: S2_T1_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T1_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S2_T1_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T1 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S2_T1 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S2_Temp_2(uint8_t *RxData) {
   S2_T8_R_err = ((RxData[5] & 1) >> 0);   // Signal: S2_T8_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T8_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S2_T8_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T8 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S2_T8 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S2_T7_R_err = ((RxData[4] & 16) >> 4);   // Signal: S2_T7_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T7_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S2_T7_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T7 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S2_T7 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S2_T6_R_err = ((RxData[2] & 1) >> 0);   // Signal: S2_T6_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T6_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S2_T6_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T6 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S2_T6 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S2_T5_R_err = ((RxData[1] & 16) >> 4);   // Signal: S2_T5_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T5_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S2_T5_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_T5 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S2_T5 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S3_Temp_1(uint8_t *RxData) {
   S3_T4_R_err = ((RxData[5] & 1) >> 0);   // Signal: S3_T4_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T4_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S3_T4_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T4 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S3_T4 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S3_T3_R_err = ((RxData[4] & 16) >> 4);   // Signal: S3_T3_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T3_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S3_T3_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T3 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S3_T3 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S3_T2_R_err = ((RxData[2] & 1) >> 0);   // Signal: S3_T2_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T2_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S3_T2_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T2 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S3_T2 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S3_T1_R_err = ((RxData[1] & 16) >> 4);   // Signal: S3_T1_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T1_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S3_T1_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T1 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S3_T1 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S3_Temp_2(uint8_t *RxData) {
   S3_T8_R_err = ((RxData[5] & 1) >> 0);   // Signal: S3_T8_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T8_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S3_T8_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T8 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S3_T8 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S3_T7_R_err = ((RxData[4] & 16) >> 4);   // Signal: S3_T7_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T7_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S3_T7_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T7 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S3_T7 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S3_T6_R_err = ((RxData[2] & 1) >> 0);   // Signal: S3_T6_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T6_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S3_T6_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T6 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S3_T6 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S3_T5_R_err = ((RxData[1] & 16) >> 4);   // Signal: S3_T5_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T5_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S3_T5_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_T5 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S3_T5 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S4_Temp_1(uint8_t *RxData) {
   S4_T4_R_err = ((RxData[5] & 1) >> 0);   // Signal: S4_T4_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T4_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S4_T4_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T4 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S4_T4 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S4_T3_R_err = ((RxData[4] & 16) >> 4);   // Signal: S4_T3_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T3_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S4_T3_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T3 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S4_T3 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S4_T2_R_err = ((RxData[2] & 1) >> 0);   // Signal: S4_T2_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T2_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S4_T2_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T2 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S4_T2 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S4_T1_R_err = ((RxData[1] & 16) >> 4);   // Signal: S4_T1_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T1_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S4_T1_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T1 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S4_T1 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S4_Temp_2(uint8_t *RxData) {
   S4_T8_R_err = ((RxData[5] & 1) >> 0);   // Signal: S4_T8_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T8_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S4_T8_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T8 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S4_T8 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S4_T7_R_err = ((RxData[4] & 16) >> 4);   // Signal: S4_T7_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T7_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S4_T7_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T7 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S4_T7 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S4_T6_R_err = ((RxData[2] & 1) >> 0);   // Signal: S4_T6_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T6_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S4_T6_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T6 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S4_T6 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S4_T5_R_err = ((RxData[1] & 16) >> 4);   // Signal: S4_T5_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T5_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S4_T5_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_T5 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S4_T5 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S5_Temp_1(uint8_t *RxData) {
   S5_T4_R_err = ((RxData[5] & 1) >> 0);   // Signal: S5_T4_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T4_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S5_T4_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T4 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S5_T4 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S5_T3_R_err = ((RxData[4] & 16) >> 4);   // Signal: S5_T3_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T3_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S5_T3_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T3 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S5_T3 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S5_T2_R_err = ((RxData[2] & 1) >> 0);   // Signal: S5_T2_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T2_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S5_T2_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T2 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S5_T2 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S5_T1_R_err = ((RxData[1] & 16) >> 4);   // Signal: S5_T1_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T1_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S5_T1_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T1 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S5_T1 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S5_Temp_2(uint8_t *RxData) {
   S5_T8_R_err = ((RxData[5] & 1) >> 0);   // Signal: S5_T8_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T8_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S5_T8_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T8 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S5_T8 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S5_T7_R_err = ((RxData[4] & 16) >> 4);   // Signal: S5_T7_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T7_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S5_T7_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T7 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S5_T7 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S5_T6_R_err = ((RxData[2] & 1) >> 0);   // Signal: S5_T6_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T6_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S5_T6_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T6 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S5_T6 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S5_T5_R_err = ((RxData[1] & 16) >> 4);   // Signal: S5_T5_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T5_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S5_T5_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_T5 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S5_T5 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S6_Temp_1(uint8_t *RxData) {
   S6_T4_R_err = ((RxData[5] & 1) >> 0);   // Signal: S6_T4_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T4_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S6_T4_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T4 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S6_T4 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S6_T3_R_err = ((RxData[4] & 16) >> 4);   // Signal: S6_T3_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T3_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S6_T3_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T3 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S6_T3 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S6_T2_R_err = ((RxData[2] & 1) >> 0);   // Signal: S6_T2_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T2_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S6_T2_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T2 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S6_T2 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S6_T1_R_err = ((RxData[1] & 16) >> 4);   // Signal: S6_T1_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T1_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S6_T1_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T1 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S6_T1 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S6_Temp_2(uint8_t *RxData) {
   S6_T8_R_err = ((RxData[5] & 1) >> 0);   // Signal: S6_T8_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T8_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S6_T8_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T8 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S6_T8 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S6_T7_R_err = ((RxData[4] & 16) >> 4);   // Signal: S6_T7_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T7_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S6_T7_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T7 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S6_T7 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S6_T6_R_err = ((RxData[2] & 1) >> 0);   // Signal: S6_T6_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T6_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S6_T6_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T6 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S6_T6 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S6_T5_R_err = ((RxData[1] & 16) >> 4);   // Signal: S6_T5_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T5_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S6_T5_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_T5 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S6_T5 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S7_Temp_1(uint8_t *RxData) {
   S7_T4_R_err = ((RxData[5] & 1) >> 0);   // Signal: S7_T4_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T4_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S7_T4_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T4 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S7_T4 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S7_T3_R_err = ((RxData[4] & 16) >> 4);   // Signal: S7_T3_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T3_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S7_T3_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T3 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S7_T3 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S7_T2_R_err = ((RxData[2] & 1) >> 0);   // Signal: S7_T2_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T2_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S7_T2_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T2 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S7_T2 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S7_T1_R_err = ((RxData[1] & 16) >> 4);   // Signal: S7_T1_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T1_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S7_T1_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T1 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S7_T1 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S7_Temp_2(uint8_t *RxData) {
   S7_T8_R_err = ((RxData[5] & 1) >> 0);   // Signal: S7_T8_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T8_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S7_T8_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T8 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S7_T8 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S7_T7_R_err = ((RxData[4] & 16) >> 4);   // Signal: S7_T7_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T7_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S7_T7_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T7 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S7_T7 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S7_T6_R_err = ((RxData[2] & 1) >> 0);   // Signal: S7_T6_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T6_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S7_T6_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T6 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S7_T6 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S7_T5_R_err = ((RxData[1] & 16) >> 4);   // Signal: S7_T5_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T5_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S7_T5_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_T5 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S7_T5 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S8_Temp_1(uint8_t *RxData) {
   S8_T4_R_err = ((RxData[5] & 1) >> 0);   // Signal: S8_T4_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T4_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S8_T4_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T4 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S8_T4 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S8_T3_R_err = ((RxData[4] & 16) >> 4);   // Signal: S8_T3_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T3_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S8_T3_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T3 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S8_T3 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S8_T2_R_err = ((RxData[2] & 1) >> 0);   // Signal: S8_T2_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T2_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S8_T2_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T2 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S8_T2 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S8_T1_R_err = ((RxData[1] & 16) >> 4);   // Signal: S8_T1_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T1_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S8_T1_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T1 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S8_T1 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S8_Temp_2(uint8_t *RxData) {
   S8_T8_R_err = ((RxData[5] & 1) >> 0);   // Signal: S8_T8_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T8_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S8_T8_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T8 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S8_T8 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S8_T7_R_err = ((RxData[4] & 16) >> 4);   // Signal: S8_T7_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T7_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S8_T7_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T7 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S8_T7 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S8_T6_R_err = ((RxData[2] & 1) >> 0);   // Signal: S8_T6_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T6_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S8_T6_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T6 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S8_T6 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S8_T5_R_err = ((RxData[1] & 16) >> 4);   // Signal: S8_T5_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T5_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S8_T5_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_T5 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S8_T5 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S9_Temp_1(uint8_t *RxData) {
   S9_T4_R_err = ((RxData[5] & 1) >> 0);   // Signal: S9_T4_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T4_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S9_T4_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T4 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S9_T4 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S9_T3_R_err = ((RxData[4] & 16) >> 4);   // Signal: S9_T3_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T3_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S9_T3_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T3 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S9_T3 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S9_T2_R_err = ((RxData[2] & 1) >> 0);   // Signal: S9_T2_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T2_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S9_T2_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T2 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S9_T2 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S9_T1_R_err = ((RxData[1] & 16) >> 4);   // Signal: S9_T1_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T1_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S9_T1_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T1 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S9_T1 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_S9_Temp_2(uint8_t *RxData) {
   S9_T8_R_err = ((RxData[5] & 1) >> 0);   // Signal: S9_T8_R_err Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T8_OW_err = ((RxData[5] & 2) >> 1);   // Signal: S9_T8_OW_err Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T8 = ((RxData[4] & 15) << 6) | ((RxData[5] & 252) >> 2);   // Signal: S9_T8 Start Bit: 35, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S9_T7_R_err = ((RxData[4] & 16) >> 4);   // Signal: S9_T7_R_err Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T7_OW_err = ((RxData[4] & 32) >> 5);   // Signal: S9_T7_OW_err Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T7 = ((RxData[3] & 255) << 2) | ((RxData[4] & 192) >> 6);   // Signal: S9_T7 Start Bit: 31, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S9_T6_R_err = ((RxData[2] & 1) >> 0);   // Signal: S9_T6_R_err Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T6_OW_err = ((RxData[2] & 2) >> 1);   // Signal: S9_T6_OW_err Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T6 = ((RxData[1] & 15) << 6) | ((RxData[2] & 252) >> 2);   // Signal: S9_T6 Start Bit: 11, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
   S9_T5_R_err = ((RxData[1] & 16) >> 4);   // Signal: S9_T5_R_err Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T5_OW_err = ((RxData[1] & 32) >> 5);   // Signal: S9_T5_OW_err Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_T5 = ((RxData[0] & 255) << 2) | ((RxData[1] & 192) >> 6);   // Signal: S9_T5 Start Bit: 7, Length: 10 Byte Order: 0, Value Type: + Factor: 0.1 Offset: 0.0 Unit: °C
}

void message_canrx_Balancing_1(uint8_t *RxData) {
   S4_C16_Balnc = ((RxData[7] & 1) >> 0);   // Signal: S4_C16_Balnc Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C15_Balnc = ((RxData[7] & 2) >> 1);   // Signal: S4_C15_Balnc Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C14_Balnc = ((RxData[7] & 4) >> 2);   // Signal: S4_C14_Balnc Start Bit: 58, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C13_Balnc = ((RxData[7] & 8) >> 3);   // Signal: S4_C13_Balnc Start Bit: 59, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C12_Balnc = ((RxData[7] & 16) >> 4);   // Signal: S4_C12_Balnc Start Bit: 60, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C11_Balnc = ((RxData[7] & 32) >> 5);   // Signal: S4_C11_Balnc Start Bit: 61, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C10_Balnc = ((RxData[7] & 64) >> 6);   // Signal: S4_C10_Balnc Start Bit: 62, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C9_Balnc = ((RxData[7] & 128) >> 7);   // Signal: S4_C9_Balnc Start Bit: 63, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C8_Balnc = ((RxData[6] & 1) >> 0);   // Signal: S4_C8_Balnc Start Bit: 48, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C7_Balnc = ((RxData[6] & 2) >> 1);   // Signal: S4_C7_Balnc Start Bit: 49, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C6_Balnc = ((RxData[6] & 4) >> 2);   // Signal: S4_C6_Balnc Start Bit: 50, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C5_Balnc = ((RxData[6] & 8) >> 3);   // Signal: S4_C5_Balnc Start Bit: 51, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C4_Balnc = ((RxData[6] & 16) >> 4);   // Signal: S4_C4_Balnc Start Bit: 52, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C3_Balnc = ((RxData[6] & 32) >> 5);   // Signal: S4_C3_Balnc Start Bit: 53, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C2_Balnc = ((RxData[6] & 64) >> 6);   // Signal: S4_C2_Balnc Start Bit: 54, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S4_C1_Balnc = ((RxData[6] & 128) >> 7);   // Signal: S4_C1_Balnc Start Bit: 55, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C16_Balnc = ((RxData[5] & 1) >> 0);   // Signal: S3_C16_Balnc Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C15_Balnc = ((RxData[5] & 2) >> 1);   // Signal: S3_C15_Balnc Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C14_Balnc = ((RxData[5] & 4) >> 2);   // Signal: S3_C14_Balnc Start Bit: 42, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C13_Balnc = ((RxData[5] & 8) >> 3);   // Signal: S3_C13_Balnc Start Bit: 43, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C12_Balnc = ((RxData[5] & 16) >> 4);   // Signal: S3_C12_Balnc Start Bit: 44, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C11_Balnc = ((RxData[5] & 32) >> 5);   // Signal: S3_C11_Balnc Start Bit: 45, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C10_Balnc = ((RxData[5] & 64) >> 6);   // Signal: S3_C10_Balnc Start Bit: 46, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C9_Balnc = ((RxData[5] & 128) >> 7);   // Signal: S3_C9_Balnc Start Bit: 47, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C8_Balnc = ((RxData[4] & 1) >> 0);   // Signal: S3_C8_Balnc Start Bit: 32, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C7_Balnc = ((RxData[4] & 2) >> 1);   // Signal: S3_C7_Balnc Start Bit: 33, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C6_Balnc = ((RxData[4] & 4) >> 2);   // Signal: S3_C6_Balnc Start Bit: 34, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C5_Balnc = ((RxData[4] & 8) >> 3);   // Signal: S3_C5_Balnc Start Bit: 35, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C4_Balnc = ((RxData[4] & 16) >> 4);   // Signal: S3_C4_Balnc Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C3_Balnc = ((RxData[4] & 32) >> 5);   // Signal: S3_C3_Balnc Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C2_Balnc = ((RxData[4] & 64) >> 6);   // Signal: S3_C2_Balnc Start Bit: 38, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S3_C1_Balnc = ((RxData[4] & 128) >> 7);   // Signal: S3_C1_Balnc Start Bit: 39, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C16_Balnc = ((RxData[3] & 1) >> 0);   // Signal: S2_C16_Balnc Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C15_Balnc = ((RxData[3] & 2) >> 1);   // Signal: S2_C15_Balnc Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C14_Balnc = ((RxData[3] & 4) >> 2);   // Signal: S2_C14_Balnc Start Bit: 26, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C13_Balnc = ((RxData[3] & 8) >> 3);   // Signal: S2_C13_Balnc Start Bit: 27, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C12_Balnc = ((RxData[3] & 16) >> 4);   // Signal: S2_C12_Balnc Start Bit: 28, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C11_Balnc = ((RxData[3] & 32) >> 5);   // Signal: S2_C11_Balnc Start Bit: 29, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C10_Balnc = ((RxData[3] & 64) >> 6);   // Signal: S2_C10_Balnc Start Bit: 30, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C9_Balnc = ((RxData[3] & 128) >> 7);   // Signal: S2_C9_Balnc Start Bit: 31, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C8_Balnc = ((RxData[2] & 1) >> 0);   // Signal: S2_C8_Balnc Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C7_Balnc = ((RxData[2] & 2) >> 1);   // Signal: S2_C7_Balnc Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C6_Balnc = ((RxData[2] & 4) >> 2);   // Signal: S2_C6_Balnc Start Bit: 18, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C5_Balnc = ((RxData[2] & 8) >> 3);   // Signal: S2_C5_Balnc Start Bit: 19, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C4_Balnc = ((RxData[2] & 16) >> 4);   // Signal: S2_C4_Balnc Start Bit: 20, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C3_Balnc = ((RxData[2] & 32) >> 5);   // Signal: S2_C3_Balnc Start Bit: 21, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C2_Balnc = ((RxData[2] & 64) >> 6);   // Signal: S2_C2_Balnc Start Bit: 22, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S2_C1_Balnc = ((RxData[2] & 128) >> 7);   // Signal: S2_C1_Balnc Start Bit: 23, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C16_Balnc = ((RxData[1] & 1) >> 0);   // Signal: S1_C16_Balnc Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C15_Balnc = ((RxData[1] & 2) >> 1);   // Signal: S1_C15_Balnc Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C14_Balnc = ((RxData[1] & 4) >> 2);   // Signal: S1_C14_Balnc Start Bit: 10, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C13_Balnc = ((RxData[1] & 8) >> 3);   // Signal: S1_C13_Balnc Start Bit: 11, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C12_Balnc = ((RxData[1] & 16) >> 4);   // Signal: S1_C12_Balnc Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C11_Balnc = ((RxData[1] & 32) >> 5);   // Signal: S1_C11_Balnc Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C10_Balnc = ((RxData[1] & 64) >> 6);   // Signal: S1_C10_Balnc Start Bit: 14, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C9_Balnc = ((RxData[1] & 128) >> 7);   // Signal: S1_C9_Balnc Start Bit: 15, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C8_Balnc = ((RxData[0] & 1) >> 0);   // Signal: S1_C8_Balnc Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C7_Balnc = ((RxData[0] & 2) >> 1);   // Signal: S1_C7_Balnc Start Bit: 1, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C6_Balnc = ((RxData[0] & 4) >> 2);   // Signal: S1_C6_Balnc Start Bit: 2, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C5_Balnc = ((RxData[0] & 8) >> 3);   // Signal: S1_C5_Balnc Start Bit: 3, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C4_Balnc = ((RxData[0] & 16) >> 4);   // Signal: S1_C4_Balnc Start Bit: 4, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C3_Balnc = ((RxData[0] & 32) >> 5);   // Signal: S1_C3_Balnc Start Bit: 5, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C2_Balnc = ((RxData[0] & 64) >> 6);   // Signal: S1_C2_Balnc Start Bit: 6, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S1_C1_Balnc = ((RxData[0] & 128) >> 7);   // Signal: S1_C1_Balnc Start Bit: 7, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
}

void message_canrx_Balancing_2(uint8_t *RxData) {
   S8_C16_Balnc = ((RxData[7] & 1) >> 0);   // Signal: S8_C16_Balnc Start Bit: 56, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C15_Balnc = ((RxData[7] & 2) >> 1);   // Signal: S8_C15_Balnc Start Bit: 57, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C14_Balnc = ((RxData[7] & 4) >> 2);   // Signal: S8_C14_Balnc Start Bit: 58, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C13_Balnc = ((RxData[7] & 8) >> 3);   // Signal: S8_C13_Balnc Start Bit: 59, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C12_Balnc = ((RxData[7] & 16) >> 4);   // Signal: S8_C12_Balnc Start Bit: 60, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C11_Balnc = ((RxData[7] & 32) >> 5);   // Signal: S8_C11_Balnc Start Bit: 61, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C10_Balnc = ((RxData[7] & 64) >> 6);   // Signal: S8_C10_Balnc Start Bit: 62, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C9_Balnc = ((RxData[7] & 128) >> 7);   // Signal: S8_C9_Balnc Start Bit: 63, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C8_Balnc = ((RxData[6] & 1) >> 0);   // Signal: S8_C8_Balnc Start Bit: 48, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C7_Balnc = ((RxData[6] & 2) >> 1);   // Signal: S8_C7_Balnc Start Bit: 49, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C6_Balnc = ((RxData[6] & 4) >> 2);   // Signal: S8_C6_Balnc Start Bit: 50, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C5_Balnc = ((RxData[6] & 8) >> 3);   // Signal: S8_C5_Balnc Start Bit: 51, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C4_Balnc = ((RxData[6] & 16) >> 4);   // Signal: S8_C4_Balnc Start Bit: 52, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C3_Balnc = ((RxData[6] & 32) >> 5);   // Signal: S8_C3_Balnc Start Bit: 53, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C2_Balnc = ((RxData[6] & 64) >> 6);   // Signal: S8_C2_Balnc Start Bit: 54, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S8_C1_Balnc = ((RxData[6] & 128) >> 7);   // Signal: S8_C1_Balnc Start Bit: 55, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C16_Balnc = ((RxData[5] & 1) >> 0);   // Signal: S7_C16_Balnc Start Bit: 40, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C15_Balnc = ((RxData[5] & 2) >> 1);   // Signal: S7_C15_Balnc Start Bit: 41, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C14_Balnc = ((RxData[5] & 4) >> 2);   // Signal: S7_C14_Balnc Start Bit: 42, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C13_Balnc = ((RxData[5] & 8) >> 3);   // Signal: S7_C13_Balnc Start Bit: 43, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C12_Balnc = ((RxData[5] & 16) >> 4);   // Signal: S7_C12_Balnc Start Bit: 44, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C11_Balnc = ((RxData[5] & 32) >> 5);   // Signal: S7_C11_Balnc Start Bit: 45, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C10_Balnc = ((RxData[5] & 64) >> 6);   // Signal: S7_C10_Balnc Start Bit: 46, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C9_Balnc = ((RxData[5] & 128) >> 7);   // Signal: S7_C9_Balnc Start Bit: 47, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C8_Balnc = ((RxData[4] & 1) >> 0);   // Signal: S7_C8_Balnc Start Bit: 32, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C7_Balnc = ((RxData[4] & 2) >> 1);   // Signal: S7_C7_Balnc Start Bit: 33, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C6_Balnc = ((RxData[4] & 4) >> 2);   // Signal: S7_C6_Balnc Start Bit: 34, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C5_Balnc = ((RxData[4] & 8) >> 3);   // Signal: S7_C5_Balnc Start Bit: 35, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C4_Balnc = ((RxData[4] & 16) >> 4);   // Signal: S7_C4_Balnc Start Bit: 36, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C3_Balnc = ((RxData[4] & 32) >> 5);   // Signal: S7_C3_Balnc Start Bit: 37, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C2_Balnc = ((RxData[4] & 64) >> 6);   // Signal: S7_C2_Balnc Start Bit: 38, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S7_C1_Balnc = ((RxData[4] & 128) >> 7);   // Signal: S7_C1_Balnc Start Bit: 39, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C16_Balnc = ((RxData[3] & 1) >> 0);   // Signal: S6_C16_Balnc Start Bit: 24, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C15_Balnc = ((RxData[3] & 2) >> 1);   // Signal: S6_C15_Balnc Start Bit: 25, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C14_Balnc = ((RxData[3] & 4) >> 2);   // Signal: S6_C14_Balnc Start Bit: 26, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C13_Balnc = ((RxData[3] & 8) >> 3);   // Signal: S6_C13_Balnc Start Bit: 27, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C12_Balnc = ((RxData[3] & 16) >> 4);   // Signal: S6_C12_Balnc Start Bit: 28, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C11_Balnc = ((RxData[3] & 32) >> 5);   // Signal: S6_C11_Balnc Start Bit: 29, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C10_Balnc = ((RxData[3] & 64) >> 6);   // Signal: S6_C10_Balnc Start Bit: 30, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C9_Balnc = ((RxData[3] & 128) >> 7);   // Signal: S6_C9_Balnc Start Bit: 31, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C8_Balnc = ((RxData[2] & 1) >> 0);   // Signal: S6_C8_Balnc Start Bit: 16, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C7_Balnc = ((RxData[2] & 2) >> 1);   // Signal: S6_C7_Balnc Start Bit: 17, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C6_Balnc = ((RxData[2] & 4) >> 2);   // Signal: S6_C6_Balnc Start Bit: 18, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C5_Balnc = ((RxData[2] & 8) >> 3);   // Signal: S6_C5_Balnc Start Bit: 19, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C4_Balnc = ((RxData[2] & 16) >> 4);   // Signal: S6_C4_Balnc Start Bit: 20, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C3_Balnc = ((RxData[2] & 32) >> 5);   // Signal: S6_C3_Balnc Start Bit: 21, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C2_Balnc = ((RxData[2] & 64) >> 6);   // Signal: S6_C2_Balnc Start Bit: 22, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S6_C1_Balnc = ((RxData[2] & 128) >> 7);   // Signal: S6_C1_Balnc Start Bit: 23, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C16_Balnc = ((RxData[1] & 1) >> 0);   // Signal: S5_C16_Balnc Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C15_Balnc = ((RxData[1] & 2) >> 1);   // Signal: S5_C15_Balnc Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C14_Balnc = ((RxData[1] & 4) >> 2);   // Signal: S5_C14_Balnc Start Bit: 10, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C13_Balnc = ((RxData[1] & 8) >> 3);   // Signal: S5_C13_Balnc Start Bit: 11, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C12_Balnc = ((RxData[1] & 16) >> 4);   // Signal: S5_C12_Balnc Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C11_Balnc = ((RxData[1] & 32) >> 5);   // Signal: S5_C11_Balnc Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C10_Balnc = ((RxData[1] & 64) >> 6);   // Signal: S5_C10_Balnc Start Bit: 14, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C9_Balnc = ((RxData[1] & 128) >> 7);   // Signal: S5_C9_Balnc Start Bit: 15, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C8_Balnc = ((RxData[0] & 1) >> 0);   // Signal: S5_C8_Balnc Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C7_Balnc = ((RxData[0] & 2) >> 1);   // Signal: S5_C7_Balnc Start Bit: 1, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C6_Balnc = ((RxData[0] & 4) >> 2);   // Signal: S5_C6_Balnc Start Bit: 2, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C5_Balnc = ((RxData[0] & 8) >> 3);   // Signal: S5_C5_Balnc Start Bit: 3, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C4_Balnc = ((RxData[0] & 16) >> 4);   // Signal: S5_C4_Balnc Start Bit: 4, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C3_Balnc = ((RxData[0] & 32) >> 5);   // Signal: S5_C3_Balnc Start Bit: 5, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C2_Balnc = ((RxData[0] & 64) >> 6);   // Signal: S5_C2_Balnc Start Bit: 6, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S5_C1_Balnc = ((RxData[0] & 128) >> 7);   // Signal: S5_C1_Balnc Start Bit: 7, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
}

void message_canrx_Balancing_3(uint8_t *RxData) {
   S9_C16_Balnc = ((RxData[1] & 1) >> 0);   // Signal: S9_C16_Balnc Start Bit: 8, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C15_Balnc = ((RxData[1] & 2) >> 1);   // Signal: S9_C15_Balnc Start Bit: 9, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C14_Balnc = ((RxData[1] & 4) >> 2);   // Signal: S9_C14_Balnc Start Bit: 10, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C13_Balnc = ((RxData[1] & 8) >> 3);   // Signal: S9_C13_Balnc Start Bit: 11, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C12_Balnc = ((RxData[1] & 16) >> 4);   // Signal: S9_C12_Balnc Start Bit: 12, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C11_Balnc = ((RxData[1] & 32) >> 5);   // Signal: S9_C11_Balnc Start Bit: 13, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C10_Balnc = ((RxData[1] & 64) >> 6);   // Signal: S9_C10_Balnc Start Bit: 14, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C9_Balnc = ((RxData[1] & 128) >> 7);   // Signal: S9_C9_Balnc Start Bit: 15, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C8_Balnc = ((RxData[0] & 1) >> 0);   // Signal: S9_C8_Balnc Start Bit: 0, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C7_Balnc = ((RxData[0] & 2) >> 1);   // Signal: S9_C7_Balnc Start Bit: 1, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C6_Balnc = ((RxData[0] & 4) >> 2);   // Signal: S9_C6_Balnc Start Bit: 2, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C5_Balnc = ((RxData[0] & 8) >> 3);   // Signal: S9_C5_Balnc Start Bit: 3, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C4_Balnc = ((RxData[0] & 16) >> 4);   // Signal: S9_C4_Balnc Start Bit: 4, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C3_Balnc = ((RxData[0] & 32) >> 5);   // Signal: S9_C3_Balnc Start Bit: 5, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C2_Balnc = ((RxData[0] & 64) >> 6);   // Signal: S9_C2_Balnc Start Bit: 6, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
   S9_C1_Balnc = ((RxData[0] & 128) >> 7);   // Signal: S9_C1_Balnc Start Bit: 7, Length: 1 Byte Order: 0, Value Type: + Factor: 1 Offset: 0 Unit: 
}