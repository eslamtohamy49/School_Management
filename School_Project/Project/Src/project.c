
#include "..\Inc\project.h"

void Take_Maximum_Students_Number(int *Maximum_Student_Number)
{
    int Temp = 0;
    ShapeDraw_Square(48, 18, 53, 4);
    cmdGoToXY(50, 20);
    cmdSetConsoleColour(TEXT_DYellow);
    printf("Enter Maximum Students number in your school: ");
    cmdSetConsoleColour(TEXT_Green);
    scanf("%d", &Temp);
    *Maximum_Student_Number = Temp;
    cmdSetConsoleColour(TEXT_DWhite);
    cmdClearScreen();
}
void PassWord_UserName(void)
{
    char username[30];
    int password = 0;
    int ret = 1, RET = 1;
    for (int i = 0; i < 3; i++)
    {
        cmdClearScreen();

        if (ret != 1 || RET != 1)
        {
            cmdGoToXY(56, 13);
            cmdSetConsoleColour(TEXT_Red);
            printf("Wrong password or user name[%d]", i + 1);
            cmdSetConsoleColour(TEXT_DWhite);
        }
        ShapeDraw_Square(55, 12, 36, 5);
        cmdGoToXY(57, 14);
        cmdSetConsoleColour(TEXT_Blue);
        printf("user_name: ");
        cmdSetConsoleColour(TEXT_LPurple);
        ret = Get_Username(username);
        printf("\n");
        cmdGoToXY(57, 15);
        cmdSetConsoleColour(TEXT_Blue);
        printf("password : ");
        cmdSetConsoleColour(TEXT_LPurple);
        RET = Get_Password(&password);
        if (ret == 1 && RET == 1)
        {
            cmdGoToXY(56, 13);
            printf("                                ");
            cmdGoToXY(59, 16);
            cmdSetConsoleColour(TEXT_Green);
            printf("Correct password and username ");
            cmdSetConsoleColour(TEXT_Green);
            break;
        }
    }
    cmdSetConsoleColour(TEXT_DWhite);
    printf("\n\n\n\n");
}

STD_ReturnType Get_Password(int *Password)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Password)
    {
        ret = E_NOT_OK;
    }
    else
    {
        int Temp_Pass;
        scanf("%d", &Temp_Pass);
        fflush(stdin);
        if (Temp_Pass == PASSWORD)
        {
            *Password = Temp_Pass;
            ret = E_OK;
        }
        *Password = Temp_Pass;
    }
    return ret;
}

STD_ReturnType Get_Username(char *Username)
{
    STD_ReturnType ret = E_NOT_OK;
    char USERNAME[30] = "Eslam Tohamy Shaban";

    if (NULL == Username)
    {
        ret = E_NOT_OK;
    }
    else
    {
        ret = Array_Scan(Username);
        ret = String_Compare_NotCaseSens_2(Username, USERNAME);
    }
    return ret;
}

STD_ReturnType String_Compare_NotCaseSens_2(char *strOne, char *strTwo)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == strOne || NULL == strTwo)
    {
        ret = E_NOT_OK;
    }
    else
    {
        char counter = 0;
        char Check_Var_One = 0;
        char Check_Var_Two = 0;
        for (counter = 1; strOne[counter] || strTwo[counter]; counter++)
        {
            Check_Var_One = strOne[counter];
            Check_Var_Two = strTwo[counter];

            if (strOne[counter] >= 'A' && strOne[counter] <= 'Z')
            {
                Check_Var_One = strOne[counter] - 'A' + 'a';
            }
            if (strTwo[counter] >= 'A' && strTwo[counter] <= 'Z')
            {
                Check_Var_Two = strTwo[counter] - 'A' + 'a';
            }

            if (Check_Var_One != Check_Var_Two)
            {
                ret = E_NOT_OK;
                break;
            }
        }
        if (Check_Var_One == Check_Var_Two)
        {
            ret = E_OK;
        }
    }

    return ret;
}
STD_ReturnType Array_Scan(char *Str_start)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Str_start)
    {
        ret = E_NOT_OK;
    }
    else
    {
        char counter = 0;
        fflush(stdin);
        scanf("%c", &Str_start[counter]);
        for (; Str_start[counter] != '\n';)
        {
            counter++;
            scanf("%c", Str_start + counter);
        }
        Str_start[counter] = 0;
        ret = E_OK;
    }
    return ret;
}
STD_ReturnType Add_New_Student(Student_t *Student, int Students_Exist)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Student)
    {
        ret = E_NOT_OK;
    }
    else
    {
        cmdClearScreen();
        ShapeDraw_Line(1, 2, 79, 0);
        ShapeDraw_Line(1, 4, 79, 0);
        ShapeDraw_Line(1, 6, 79, 0);
        ShapeDraw_Line(1, 8, 79, 0);
        ShapeDraw_Line(1, 10, 79, 0);
        ShapeDraw_Line(1, 12, 79, 0);
        ShapeDraw_Line(1, 14, 79, 0);
        ShapeDraw_Line(1, 16, 79, 0);
        ShapeDraw_Line(1, 18, 79, 0);
        ShapeDraw_Square(0, 0, 80, 20);
        ShapeDraw_Line(30, 1, 0, 19);
        printf("\n");
        fflush(stdin);
        cmdSetConsoleColour(TEXT_DPurple);
        cmdGoToXY(1, 1);
        printf("Student age: ");
        cmdGoToXY(1, 3);
        printf("Student ID: ");
        cmdGoToXY(1, 5);
        printf("Student name: ");
        cmdGoToXY(1, 7);
        printf("Student phone: ");
        cmdSetConsoleColour(TEXT_Sky);
        cmdGoToXY(1, 9);
        printf("Student Father name:  ");
        cmdGoToXY(1, 11);
        printf("Student Father age:  ");
        cmdGoToXY(1, 13);
        printf("Student Father phone:  ");
        cmdSetConsoleColour(TEXT_DYellow);
        cmdGoToXY(1, 15);
        printf("Student Mother name:  ");
        cmdGoToXY(1, 17);
        printf("Student Mother age:  ");
        cmdGoToXY(1, 19);
        printf("Student Mother phone:  ");
        cmdSetConsoleColour(TEXT_DWhite);
        cmdGoToXY(40, 1);
        scanf("%d", &((Student + Students_Exist)->Age));
        cmdGoToXY(40, 3);
        scanf("%d", &((Student + Students_Exist)->ID));
        cmdGoToXY(40, 5);
        Array_Scan((Student + Students_Exist)->Name);
        cmdGoToXY(40, 7);
        cmdSetConsoleColour(TEXT_Blue);
        Array_Scan((Student + Students_Exist)->Phone);
        cmdSetConsoleColour(TEXT_DWhite);
        cmdGoToXY(40, 9);
        Array_Scan((Student + Students_Exist)->Father.name);
        cmdGoToXY(40, 11);
        scanf("%d", &((Student + Students_Exist)->Father.age));
        cmdGoToXY(40, 13);
        cmdSetConsoleColour(TEXT_Blue);
        Array_Scan((Student + Students_Exist)->Father.phone);
        cmdSetConsoleColour(TEXT_DWhite);
        cmdGoToXY(40, 15);
        Array_Scan((Student + Students_Exist)->Mother.name);
        cmdGoToXY(40, 17);
        scanf("%d", &((Student + Students_Exist)->Mother.age));

        cmdGoToXY(40, 19);
        cmdSetConsoleColour(TEXT_Blue);
        Array_Scan((Student + Students_Exist)->Mother.phone);
        cmdSetConsoleColour(TEXT_DWhite);

        cmdClearScreen();
        ret = E_OK;
    }
    return ret;
}
STD_ReturnType Print_Student_Data_Id(Student_t *Student, int Student_Id, int Students_Exist)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Student)
    {
        ret = E_NOT_OK;
    }
    else
    {
        int index = 0;
        index = Search_Student_Id(Student, Student_Id, Students_Exist);
        if (index > -1)
        {
            cmdClearScreen();
            ShapeDraw_Line(1, 2, 79, 0);
            ShapeDraw_Line(1, 4, 79, 0);
            ShapeDraw_Line(1, 6, 79, 0);
            ShapeDraw_Line(1, 8, 79, 0);
            ShapeDraw_Line(1, 10, 79, 0);
            ShapeDraw_Line(1, 12, 79, 0);
            ShapeDraw_Line(1, 14, 79, 0);
            ShapeDraw_Line(1, 16, 79, 0);
            ShapeDraw_Line(1, 18, 79, 0);
            ShapeDraw_Square(0, 0, 80, 20);
            ShapeDraw_Line(30, 1, 0, 19);
            printf("\n");
            fflush(stdin);
            cmdSetConsoleColour(TEXT_DPurple);
            cmdGoToXY(1, 1);
            printf("Student name: ");
            cmdGoToXY(1, 3);
            printf("Student ID: ");
            cmdGoToXY(1, 5);
            printf("Student age: ");
            cmdGoToXY(1, 7);
            printf("Student phone: ");
            cmdSetConsoleColour(TEXT_Sky);
            cmdGoToXY(1, 9);
            printf("Student Father age:  ");
            cmdGoToXY(1, 11);
            printf("Student Father name:  ");
            cmdGoToXY(1, 13);
            printf("Student Father phone:  ");
            cmdSetConsoleColour(TEXT_DYellow);
            cmdGoToXY(1, 15);
            printf("Student Mother age:  ");
            cmdGoToXY(1, 17);
            printf("Student Mother name:  ");
            cmdGoToXY(1, 19);
            printf("Student Mother phone:  ");
            cmdSetConsoleColour(TEXT_DWhite);
            cmdGoToXY(40, 1);
            Array_Print_Char((Student + index)->Name);
            cmdGoToXY(40, 3);
            printf("%d", (Student + index)->ID);
            cmdGoToXY(40, 5);
            printf("%d", (Student + index)->Age);
            cmdGoToXY(40, 7);
            cmdSetConsoleColour(TEXT_Blue);
            Array_Print_Char((Student + index)->Phone);
            cmdSetConsoleColour(TEXT_DWhite);
            cmdGoToXY(40, 9);
            printf("%d", (Student + index)->Father.age);
            cmdGoToXY(40, 11);
            Array_Print_Char((Student + index)->Father.name);

            cmdGoToXY(40, 13);
            cmdSetConsoleColour(TEXT_Blue);
            Array_Print_Char((Student + index)->Father.phone);
            cmdSetConsoleColour(TEXT_DWhite);
            cmdGoToXY(40, 15);
            printf("%d", (Student + index)->Mother.age);
            cmdGoToXY(40, 17);
            Array_Print_Char((Student + index)->Mother.name);
            cmdGoToXY(40, 19);
            cmdSetConsoleColour(TEXT_Blue);
            Array_Print_Char((Student + index)->Mother.phone);
            cmdSetConsoleColour(TEXT_DWhite);

            printf("\n\n\n\n");
        }
        else
        {
            printf("Student Id Not exist in this school \n");
        }

        ret = E_OK;
    }
    return ret;
}
STD_ReturnType Print_Student_Data_Name(Student_t *Student, char *Student_Name, int Students_Exist)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Student)
    {
        ret = E_NOT_OK;
    }
    else
    {
        int index = 0;
        index = Search_Student_Name(Student, Student_Name, Students_Exist);
        if (index > -1)
        {
            cmdClearScreen();
            ShapeDraw_Line(1, 2, 79, 0);
            ShapeDraw_Line(1, 4, 79, 0);
            ShapeDraw_Line(1, 6, 79, 0);
            ShapeDraw_Line(1, 8, 79, 0);
            ShapeDraw_Line(1, 10, 79, 0);
            ShapeDraw_Line(1, 12, 79, 0);
            ShapeDraw_Line(1, 14, 79, 0);
            ShapeDraw_Line(1, 16, 79, 0);
            ShapeDraw_Line(1, 18, 79, 0);
            ShapeDraw_Square(0, 0, 80, 20);
            ShapeDraw_Line(30, 1, 0, 19);
            printf("\n");
            fflush(stdin);
            cmdSetConsoleColour(TEXT_DPurple);
            cmdGoToXY(1, 1);
            printf("Student name: ");
            cmdGoToXY(1, 3);
            printf("Student ID: ");
            cmdGoToXY(1, 5);
            printf("Student age: ");
            cmdGoToXY(1, 7);
            printf("Student phone: ");
            cmdSetConsoleColour(TEXT_Sky);
            cmdGoToXY(1, 9);
            printf("Student Father age:  ");
            cmdGoToXY(1, 11);
            printf("Student Father name:  ");
            cmdGoToXY(1, 13);
            printf("Student Father phone:  ");
            cmdSetConsoleColour(TEXT_DYellow);
            cmdGoToXY(1, 15);
            printf("Student Mother age:  ");
            cmdGoToXY(1, 17);
            printf("Student Mother name:  ");
            cmdGoToXY(1, 19);
            printf("Student Mother phone:  ");
            cmdSetConsoleColour(TEXT_DWhite);
            cmdGoToXY(40, 1);
            Array_Print_Char((Student + index)->Name);
            cmdGoToXY(40, 3);
            printf("%d", (Student + index)->ID);
            cmdGoToXY(40, 5);
            printf("%d", (Student + index)->Age);
            cmdGoToXY(40, 7);
            cmdSetConsoleColour(TEXT_Blue);
            Array_Print_Char((Student + index)->Phone);
            cmdSetConsoleColour(TEXT_DWhite);
            cmdGoToXY(40, 9);
            printf("%d", (Student + index)->Father.age);
            cmdGoToXY(40, 11);
            Array_Print_Char((Student + index)->Father.name);

            cmdGoToXY(40, 13);
            cmdSetConsoleColour(TEXT_Blue);
            Array_Print_Char((Student + index)->Father.phone);
            cmdSetConsoleColour(TEXT_DWhite);
            cmdGoToXY(40, 15);
            printf("%d", (Student + index)->Mother.age);
            cmdGoToXY(40, 17);
            Array_Print_Char((Student + index)->Mother.name);
            cmdGoToXY(40, 19);
            cmdSetConsoleColour(TEXT_Blue);
            Array_Print_Char((Student + index)->Mother.phone);
            cmdSetConsoleColour(TEXT_DWhite);

            printf("\n\n\n\n");
        }
        else
        {
            printf("Student Name Not exist in this school \n");
        }

        ret = E_OK;
    }
    return ret;
}
STD_ReturnType Print_All_Students_Data(Student_t *Student, int Current_Number)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Student)
    {
        ret = E_NOT_OK;
    }
    else
    {
        int index = 0;
        int Mouse = 3;
        cmdGoToXY(1, 1);
        printf(" ID        Student name            Student Phone      Student Age        Student Father Age      Student Mother Age\n");
        ShapeDraw_Square(0, 0, 117, 40);
        ShapeDraw_Line(1, 2, 117, 0);
        ShapeDraw_Line(7, 1, 0, 39);
        ShapeDraw_Line(33, 1, 0, 39);
        ShapeDraw_Line(50, 1, 0, 39);
        ShapeDraw_Line(70, 1, 0, 39);
        ShapeDraw_Line(93, 1, 0, 39);
        for (index = 0; index < Current_Number; index++)
        {
            cmdGoToXY(2, Mouse);
            printf("%d", (Student + index)->ID);
            cmdGoToXY(8, Mouse);
            printf("%s %s", (Student + index)->Name, (Student + index)->Father.name);
            cmdGoToXY(36, Mouse);
            cmdSetConsoleColour(TEXT_Blue);
            Print_Phone_Number((Student + index)->Phone);
            cmdSetConsoleColour(TEXT_DWhite);
            cmdGoToXY(59, Mouse);
            printf("%d", (Student + index)->Age);
            cmdGoToXY(78, Mouse);
            printf("%d", (Student + index)->Father.age);
            cmdGoToXY(105, Mouse);
            printf("%d", (Student + index)->Mother.age);

            Mouse += 2;
        }
        ret = E_OK;
    }
    return ret;
}
STD_ReturnType Search_Student_Id(Student_t *Student, int Student_Id, int Students_Exist)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Student)
    {
        ret = E_NOT_OK;
    }
    else
    {
        int counter = 0;
        for (counter = 0; counter < Students_Exist; counter++)
        {
            if (Student_Id == (Student + counter)->ID)
            {
                return counter;
            }
        }
        ret = -1;
    }
    return ret;
}
STD_ReturnType Search_Student_Name(Student_t *Student, char *Student_Name, int Students_Exist)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Student)
    {
        ret = E_NOT_OK;
    }
    else
    {
        int counter = 0, return_val = 0;
        for (counter = 0; counter < Students_Exist; counter++)
        {
            return_val = String_Compare_NotCaseSens_2(Student_Name, (Student + counter)->Name);
            if (return_val == 1)
            {
                return counter;
            }
        }

        ret = -1;
    }
    return ret;
}
void Array_Print_Char(const char *const address_start)
{
    char i = 0;
    for (i = 0; address_start[i]; i++)
    {
        printf("%c", address_start[i]);
    }
    printf("\n");
}
void Emplyee_Function_Choice(int *User_Choice, int Students_Already_Exist, int Maximum_students)
{
    int Temp = 0;
    cmdClearScreen();
    printf("\n");
    cmdSetConsoleColour(TEXT_Blue);
    printf("  1   Add new student\n\n");
    cmdSetConsoleColour(TEXT_DPurple);
    printf("  2   Print all students data\n\n");
    cmdSetConsoleColour(TEXT_LPurple);
    printf("  3   Print student data reach by using id search\n\n");
    printf("  4   Print student data reach by using name search\n\n");
    cmdSetConsoleColour(TEXT_Cyan);
    printf("  5   Edit student data reach by using id search\n\n");
    printf("  6   Edit student data reach by using name search\n\n");
    cmdSetConsoleColour(TEXT_Red);
    printf("  7   Remove student data reach by using id search\n\n");
    printf("  8   Remove student data reach by using name search\n\n");
    cmdSetConsoleColour(TEXT_Gray);
    printf("  9   Exit All system programms");
    cmdSetConsoleColour(TEXT_Sky);
    printf("\n\n\n\n");
    printf("                       Enter your Choice Task: \n");
    cmdSetConsoleColour(TEXT_DWhite);
    ShapeDraw_Line(1, 2, 79, 0);
    ShapeDraw_Line(1, 4, 79, 0);
    ShapeDraw_Line(1, 6, 79, 0);
    ShapeDraw_Line(1, 8, 79, 0);
    ShapeDraw_Line(1, 10, 79, 0);
    ShapeDraw_Line(1, 12, 79, 0);
    ShapeDraw_Line(1, 14, 79, 0);
    ShapeDraw_Line(1, 16, 79, 0);
    ShapeDraw_Line(4, 0, 0, 18);
    ShapeDraw_Square(0, 0, 80, 18);
    ShapeDraw_Square(21, 20, 28, 2);
    ShapeDraw_Square(94, 0, 35, 4);
    cmdGoToXY(95, 1);
    cmdSetConsoleColour(TEXT_DYellow);
    printf("Maximum Students Number    : ");
    cmdSetConsoleColour(TEXT_Red);
    cmdGoToXY(125, 1);
    printf("%d", Maximum_students);
    cmdGoToXY(95, 3);
    cmdSetConsoleColour(TEXT_DYellow);
    printf("Students Number U have Now : ");
    cmdSetConsoleColour(TEXT_Green);
    cmdGoToXY(125, 3);
    printf("%d", Students_Already_Exist);
    cmdSetConsoleColour(TEXT_Green);
    cmdGoToXY(47, 21);
    scanf("%d", &Temp);
    *User_Choice = Temp;
    cmdSetConsoleColour(TEXT_DWhite);
    cmdClearScreen();
    printf("\n\n\n\n\n\n\n");
}
void Emplyee_Function_Choice_Remove_Edit(int *User_Choice)
{
    int Temp = 0;
    cmdClearScreen();
    printf("\n");
    cmdSetConsoleColour(TEXT_Blue);
    printf("  0   Student Name\n\n");
    printf("  1   Student ID\n\n");
    printf("  2   Student Age\n\n");
    printf("  3   Student Phone\n\n");
    cmdSetConsoleColour(TEXT_Cyan);
    printf("  4   Father Name\n\n");
    printf("  5   Father Age\n\n");
    printf("  6  Father Phone\n\n");
    cmdSetConsoleColour(TEXT_DYellow);
    printf("  7   Mother Name\n\n");
    printf("  8   Mother Age\n\n");
    printf("  9   Mother Phone\n\n");
    cmdSetConsoleColour(TEXT_DPurple);
    printf("\n\n");
    printf("                Enter your Choice Task: \n");
    cmdSetConsoleColour(TEXT_DWhite);
    ShapeDraw_Line(1, 2, 50, 0);
    ShapeDraw_Line(1, 4, 50, 0);
    ShapeDraw_Line(1, 6, 50, 0);
    ShapeDraw_Line(1, 8, 50, 0);
    ShapeDraw_Line(1, 10, 50, 0);
    ShapeDraw_Line(1, 12, 50, 0);
    ShapeDraw_Line(1, 14, 50, 0);
    ShapeDraw_Line(1, 16, 50, 0);
    ShapeDraw_Line(1, 18, 50, 0);
    ShapeDraw_Line(4, 0, 0, 20);
    ShapeDraw_Square(0, 0, 51, 20);
    ShapeDraw_Square(14, 22, 28, 2);
    cmdSetConsoleColour(TEXT_Green);
    cmdGoToXY(40, 23);
    scanf("%d", &Temp);
    *User_Choice = Temp;
    cmdSetConsoleColour(TEXT_DWhite);
    cmdClearScreen();
    printf("\n\n\n\n\n\n\n");
}
STD_ReturnType Edit_Student_Data_Id(Student_t *Student, int Student_Id, int Students_Exist)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Student)
    {
        ret = E_NOT_OK;
    }
    else
    {
        int index = 0;
        index = Search_Student_Id(Student, Student_Id, Students_Exist);
        if (index > -1)
        {
            int User_Edit_Choice = 0;
            int contiue_var = 0;
        START:
            Emplyee_Function_Choice_Remove_Edit(&User_Edit_Choice);
            ret = Edit_Student_Data_ByUserChoice(Student, index, User_Edit_Choice);
            printf("\n\n");
            printf("IF U Want to Edit any thing else Enter 1 else Enter any thing:  ");
            scanf("%d", &contiue_var);
            if (contiue_var == 1)
            {
                goto START;
            }

            ret = E_OK;
        }
        else
        {
            printf("Student Id Not exist in this school \n");
        }
    }
    return ret;
}
STD_ReturnType Edit_Student_Data_Name(Student_t *Student, char *Student_Name, int Students_Exist)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Student || NULL == Student_Name)
    {
        ret = E_NOT_OK;
    }
    else
    {
        int index = 0;
        index = Search_Student_Name(Student, Student_Name, Students_Exist);
        if (index > -1)
        {
            int User_Edit_Choice = 0;
            int contiue_var = 0;
        START:
            Emplyee_Function_Choice_Remove_Edit(&User_Edit_Choice);
            ret = Edit_Student_Data_ByUserChoice(Student, index, User_Edit_Choice);
            printf("\n\n");
            printf("IF U Want to Edit any thing else Enter 1 else Enter any thing:  ");
            scanf("%d", &contiue_var);
            if (contiue_var == 1)
            {
                goto START;
            }
            ret = E_OK;
        }
        else
        {
            printf("Student Name Not exist in this school \n");
        }
    }
    return ret;
}
STD_ReturnType Remove_Student_Data_Id(Student_t *Student, int Student_Id, int Students_Exist)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Student)
    {
        ret = E_NOT_OK;
    }
    else
    {
        int index = 0;
        index = Search_Student_Id(Student, Student_Id, Students_Exist);
        if (index > -1)
        {
            int counter = 0;
            for (counter = index; counter < Students_Exist; counter++)
            {
                Student[counter] = Student[counter + 1];
            }

            ret = E_OK;
        }
        else
        {
            printf("Student Id Not exist in this school \n");
        }
    }
    return ret;
}
STD_ReturnType Remove_Student_Data_Name(Student_t *Student, char *Student_Name, int Students_Exist)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Student || NULL == Student_Name)
    {
        ret = E_NOT_OK;
    }
    else
    {
        int index = 0;
        index = Search_Student_Name(Student, Student_Name, Students_Exist);
        if (index > -1)
        {
            int counter = 0;
            for (counter = index; counter < Students_Exist; counter++)
            {
                Student[counter] = Student[counter + 1];
            }

            ret = E_OK;
        }
        else
        {
            printf("Student Name Not exist in this school \n");
        }
    }
    return ret;
}
STD_ReturnType Edit_Student_Data_ByUserChoice(Student_t *Student, int index, int User_Choice)
{
    STD_ReturnType ret = E_NOT_OK;
    if (NULL == Student)
    {
        ret = E_NOT_OK;
    }
    else
    {
        switch (User_Choice)
        {
        case STUDENT_EDIT_NAME:
            printf("Enter the edited student name\n");
            Array_Scan((Student + index)->Name);
            break;
        case STUDENT_EDIT_ID:
            printf("Enter the student new id\n");
            scanf("%d", (&(Student + index)->ID));
            break;
        case STUDENT_EDIT_AGE:
            printf("Enter the new student age\n");
            scanf("%d", (&(Student + index)->Age));
            break;
        case STUDENT_EDIT_PHONE:
            printf("Enter the new student phone\n");
            cmdSetConsoleColour(TEXT_Blue);
            Array_Scan((Student + index)->Phone);
            cmdSetConsoleColour(TEXT_DWhite);
            break;
        case STUDENT_EDIT_FATHER_NAME:
            printf("Enter the edited student father name\n");
            Array_Scan((Student + index)->Father.name);
            break;
        case STUDENT_EDIT_FATHER_AGE:
            printf("Enter the new age of the student father\n");
            scanf("%d", (&(Student + index)->Father.age));
            break;
        case STUDENT_EDIT_FATHER_PHONE:
            printf("Enter the student father new phone\n");
            cmdSetConsoleColour(TEXT_Blue);
            Array_Scan((Student + index)->Father.phone);
            cmdSetConsoleColour(TEXT_DWhite);
            break;
        case STUDENT_EDIT_MOTHER_NAME:
            printf("Enter the edited student mother name\n");
            Array_Scan((Student + index)->Mother.name);
            break;
        case STUDENT_EDIT_MOTHER_AGE:
            printf("Enter the new age of the student mother\n");
            scanf("%d", (&(Student + index)->Mother.age));
            break;
        case STUDENT_EDIT_MOTHER_PHONE:
            printf("Enter the new age of the student mother\n");
            cmdSetConsoleColour(TEXT_Blue);
            scanf("%d", (&(Student + index)->Mother.phone));
            cmdSetConsoleColour(TEXT_DWhite);
            break;

        default:
            ret = E_NOT_OK;
            return ret;
            break;
        }

        ret = E_OK;
    }
    return ret;
}
void Print_Phone_Number(char *Phone_Number)
{
    for (int i = 0; i < 11; i++)
    {
        printf("%c", Phone_Number[i]);
    }
}
void Exit_All_Programms(void)
{
    exit(1);
}