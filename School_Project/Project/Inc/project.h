/**
 * File: project.h
 * Author: Eng- Mohamed Mokhtar
 * Group: Online18
 * Date: 2024, Aug
 * Description: ...
 * Version: 1.0
 */

#ifndef __PROJECT__
#define __PROJECT__

/***************_APP_INCLUDES_*****************************/
#include "../../std_Headers/std_Utility.h"
#include "cmd_Handler.h"
#include "ShapeDraw.h"
#include "Terminal.h"
#include "mTime.h"
/***************_Standard_INCLUDES_************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/***************_Types_Define_*****************************/

#define E_OK 0x01
#define E_NOT_OK 0x00

#define STUDENT_NAME 50
#define STUDENT_NUMBER 12

#define STUDENT_RELATIVE_NAME 50
#define STUDENT_RELATIVE_NUMBER 12

#define STUDEND_CONFIGURATIONS_ENABLE 0x01
#define STUDEND_CONFIGURATIONS_DISABLE 0x00
#define MAXIMUM_STUDENTS_CAPACITY 200
#define ZERO_VALUE 0X00
#define ONE_VALUE 0X01

#define PASSWORD 1234
typedef int STD_ReturnType;
typedef enum
{
    ADD_NEW_STUDENT = 1,
    PRINT_ALL_STUDENTS_DATA,
    PRINT_STUDENT_DATA_ID_SEARCH,
    PRINT_STUDENT_DATA_NAME_SEARCH,
    EDIT_STUDENT_DATA_ID_SEARCH,
    EDIT_STUDENT_DATA_NAME_SEARCH,
    REMOVE_STUDENT_DATA_ID_SEARCH,
    REMOVE_STUDENT_DATA_NAME_SEARCH,
    EXIT_ALL_PROGRAM_SYSTEMS,
} Student_Choice_t;

typedef enum
{
    STUDENT_EDIT_NAME = 0,
    STUDENT_EDIT_ID,
    STUDENT_EDIT_AGE,
    STUDENT_EDIT_PHONE,

    STUDENT_EDIT_FATHER_NAME,
    STUDENT_EDIT_FATHER_AGE,
    STUDENT_EDIT_FATHER_PHONE,

    STUDENT_EDIT_MOTHER_NAME,
    STUDENT_EDIT_MOTHER_AGE,
    STUDENT_EDIT_MOTHER_PHONE,

} Student_Edit_Choice_t;

typedef struct
{
    char age;
    char phone[STUDENT_RELATIVE_NUMBER];
    char name[STUDENT_RELATIVE_NAME];
} Student_Relative_t;

typedef struct
{
    char Age;
    char Name[STUDENT_NAME];
    char Phone[STUDENT_NUMBER];
    char ID;
    Student_Relative_t Father;
    Student_Relative_t Mother;
} Student_t;

/***************_project.c_FUNCTION_PROTOTYPE_*************/
void PassWord_UserName(void);
void Array_Print_Char(const char *const address_start);
void Take_Maximum_Students_Number(int *Maximum_Student_Number);
void Emplyee_Function_Choice(int *User_Choice, int Students_Already_Exist, int Maximum_students);
void Emplyee_Function_Choice_Remove_Edit(int *User_Choice);
void Print_Phone_Number(char *Phone_Number);
void Exit_All_Programms(void);

STD_ReturnType Get_Password(int *Password);
STD_ReturnType Get_Username(char *Username);
STD_ReturnType String_Compare_NotCaseSens_2(char *strOne, char *strTwo);
STD_ReturnType Array_Scan(char *Str_start);
STD_ReturnType Add_New_Student(Student_t *Student, int Students_Exist);
STD_ReturnType Print_Student_Data_Id(Student_t *Student, int Student_Id, int Students_Exist);
STD_ReturnType Print_Student_Data_Name(Student_t *Student, char *Student_Name, int Students_Exist);
STD_ReturnType Print_All_Students_Data(Student_t *Student, int Current_Number);
STD_ReturnType Search_Student_Id(Student_t *Student, int Student_Id, int Students_Exist);
STD_ReturnType Search_Student_Name(Student_t *Student, char *Student_Name, int Students_Exist);
STD_ReturnType Edit_Student_Data_Id(Student_t *Student, int Student_Id, int Students_Exist);
STD_ReturnType Edit_Student_Data_Name(Student_t *Student, char *Student_Name, int Students_Exist);
STD_ReturnType Remove_Student_Data_Id(Student_t *Student, int Student_Id, int Students_Exist);
STD_ReturnType Remove_Student_Data_Name(Student_t *Student, char *Student_Name, int Students_Exist);
STD_ReturnType Edit_Student_Data_ByUserChoice(Student_t *Student, int index, int User_Choice);

#endif /*__PROJECT__*/