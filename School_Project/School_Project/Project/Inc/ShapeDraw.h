/**
 * File: ShapeDraw.h
 * Author: Eng- Mohamed Mokhtar
 * Group: Online18
 * Date: 2024, Aug
 * Description: This header file defines enumerated constants for colors.
 * Version: 1.0
 */

#ifndef __SUPPORT_LIBS_INC_SHAPE_DRAW_H__
#define __SUPPORT_LIBS_INC_SHAPE_DRAW_H__

/***************_APP_INCLUDES_*****************************/
#include "../../std_Headers/std_Utility.h"

/***************_Consol_Management_INCLUDES_***************/
#include "../Inc/cmd_Handler.h"

/***************_Standard_INCLUDES_************************/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>   // Windows API header

/***************_Types_Define_*****************************/
/**********_Screen_Dimensions_Define_*******/
#define CMD_UNITESCREEN_WI	(135)
#define CMD_UNITESCREEN_HE	(32)

/**********_Shape_Borders_Define_***********/
#define CORNER_BOTLEFT	(0xC8)	// ╚
#define CORNER_BOTRIGHT	(0xBC)	// ╝
#define CORNER_TOPLEFT	(0xC9)	// ╔
#define CORNER_TOPRIGHT	(0xBB)	// ╗
#define H_LINE			(0xCD)	// ═
#define V_LINE			(0xBA)	// ║
#define MiddleHLine_L	(0xCC)  // ╠
#define MiddleHLine_R	(0xB9)  // ╣
#define Junction		(0xCE)  // ╬

#define FOLDED_MIDUP	(0xDF)  // ▀
#define FOLDED_MIDMID	(0xFE)  // ■
#define FOLDED_MIDDOWN	(0xDC)  // ▄

#define FOLDED_LEFT		(0xDD)  // ▌
#define FOLDED_RIGHT	(0xDE)  // ▐

#define THIN_H_LINE		(0xC4)  // ─
#define THIN_V_LINE		(0xB3)  // │


/**********_Special_Colors_Define_**********/

/**********_Normal_Colors_Define_***********/


/***************_ShapeDraw.c_FUNCTION_PROTOTYPE_***********/
void ShapeDraw_Percentage(u8 au8SqXPos, u16 au16SqYPos, u8 au8Total, u8 au8PercentX);
void ShapeDraw_BarCode(u8 au8SqXPos, u16 au16SqYPos, u8 au8BarCodeSize, u32 au32ID);

void ShapeDraw_Line(u8 au8SqXPos, u16 au16SqYPos, u8 au8Width, u16 au16Height);

void ShapeDraw_Square(u8 au8SqXPos, u16 au16SqYPos, u8 au8Width, u16 au16Height);
void ShapeDraw_FoldSquare(u8 au8SqXPos, u16 au16SqYPos, u8 au8Width, u16 au16Height);
void ShapeDraw_CenterSquare(u8 au8SqXPos, u16 au16SqYPos, u8 au8Width, u16 au16Height);

#endif /* __SUPPORT_LIBS_INC_SHAPE_DRAW_H__ */