/**
 * File: std_Enums.h
 * Author: Eng- Mohamed Mokhtar
 * Group: Online18
 * Date: 2024, Aug
 * Description: Header file for standard enumerations.
 * Notes: This file contains declarations of common enumerations
 *        used throughout the project, ensuring consistent
 *        and standardized usage of enums.
 * Version: 1.0
 */

#ifndef STDHEADERS_STD_ENUMS_H_
#define STDHEADERS_STD_ENUMS_H_

typedef enum {
    std_enuStatus_Ok             = 0u,
    std_enuStatus_Error          = 1u,
    std_enuStatus_Timeout        = 2u,
    std_enuStatus_NotFound       = 3u,
    std_enuStatus_InvalidParam   = 4u,
} std_enuStatusCode_et;

typedef enum {
    std_enuFALSE = 0u,
    std_enuTRUE  = 1u,
} std_enuBool_et;

typedef enum {
    std_enuOK     = 0u,
    std_enuNOT_OK = 1u,
} std_enuStatus_et;

typedef enum {
    std_enuInactive = 0u,
    std_enuActive   = 1u,
} std_enuActivation_et;

typedef enum {
    std_enuDisabled = 0u,
    std_enuEnabled  = 1u,
} std_enuEnable_et;

typedef enum {
    std_enuDisconnected   = 0u,
    std_enuConnecting     = 1u,
    std_enuConnected      = 2u,
    std_enuReconnecting   = 3u,
    std_enuDisconnecting  = 4u,
    std_enuFailed         = 5u,
} std_enuConnection_et;

typedef enum {
    std_enuCounterReset = 0u,
    std_enuCounterSet   = 1u,
} std_enuCounter_et;

typedef enum Interrupt_State_Config
{
	Interrupt_Enable    =0U,
    Interrupt_Disable   =1U,
}InterruptState_et;

#endif /* STDHEADERS_STD_ENUMS_H_ */
