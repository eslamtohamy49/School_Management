/**
 * File: cmd_Handler.h
 * Author: Eng- Mohamed Mokhtar
 * Group: Online18
 * Date: 2024, Aug
 * Description: controlling CMD through various function.
 * Version: 1.0
 */

#ifndef __SUPPORT_LIBS_INC_CMD_HANDLER_H__
#define __SUPPORT_LIBS_INC_CMD_HANDLER_H__

/***************_APP_INCLUDES_*****************************/
#include "../../std_Headers/std_Utility.h"

/***************_Standard_INCLUDES_************************/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>   // Windows API header

/***************_Types_Define_*****************************/
/**********_Normal_Colors_Define_***********/
#define TEXT_Sky	    3U
#define TEXT_Red	    4U
#define TEXT_DPurple	5U
#define TEXT_DYellow	6U
#define TEXT_DWhite	    7U
#define TEXT_Gray	    8U
#define TEXT_Blue	    9U
#define TEXT_Green	    10U
#define TEXT_Cyan	    11U
#define TEXT_Pink	    12U
#define TEXT_LPurple	13U
#define TEXT_LYellow	14U
#define TEXT_LWhite	    15U

/**********_Special_Colors_Define_**********/
#define ERROR_TEXT	    TEXT_Red
#define DEBUG_TEXT	    TEXT_LYellow
#define TEXT_TEXT		TEXT_Green

/* typedef enum {
    TEXT_Sky 	 = 3U,
    TEXT_Red     = 4U,
    TEXT_DPurple = 5U,
    TEXT_DYellow = 6U,
    TEXT_DWhite  = 7U,
    TEXT_Gray    = 8U,
    TEXT_Blue    = 9U,
    TEXT_Green   = 10U,
    TEXT_Cyan    = 11U,
    TEXT_Pink  	 = 12U,
    TEXT_LPurple = 13U,
    TEXT_LYellow = 14U,
    TEXT_LWhite  = 15U,
} TextColor;
 */

/***************_cmd_Handler.c_FUNCTION_PROTOTYPE_*********/
void cmdSetConsoleColour(u8 au8Color);
void cmdResetConsoleColour(void);
void cmdGoToXY(u8 au8Xposition, u8 au8Yposition);
void cmdClearScreen(void);
void cmdShowConsoleCursor(u8 au8ShowFlag);

#endif /* __SUPPORT_LIBS_INC_CMD_HANDLER_H__ */