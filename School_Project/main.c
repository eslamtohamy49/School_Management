

#include "std_Headers/std_Utility.h"
#include "Project/Inc/project.h"

int main(void)
{
    char Student_Name[STUDENT_NAME];
    int Student_Id = ZERO_VALUE;
    int Emplyee_Choice_Task = ZERO_VALUE;
    int Maximum_Student_Number = ZERO_VALUE;
    int Students_Already_Exist = ZERO_VALUE;
    int Return_Page_Value = ZERO_VALUE;
    Student_t SCHOOL_STUDENTS[MAXIMUM_STUDENTS_CAPACITY];

    PassWord_UserName();

    Take_Maximum_Students_Number(&Maximum_Student_Number);

    while (ONE_VALUE)
    {

        if (Maximum_Student_Number > 200)
        {
            printf("Maximum Students you can put = 200 student\n");
            printf("Please , Enter students number <= 200 student");
            Take_Maximum_Students_Number(&Maximum_Student_Number);
        }
        else
        {
            Emplyee_Function_Choice(&Emplyee_Choice_Task, Students_Already_Exist, Maximum_Student_Number);
            switch (Emplyee_Choice_Task)
            {
            case ADD_NEW_STUDENT:
                if (Students_Already_Exist == Maximum_Student_Number)
                {
                    printf("U reach the maximum students capacity\n");
                    printf("Enter 0 to return the privous page: ");
                    scanf("%d", &Return_Page_Value);
                }
                else
                {
                    Add_New_Student(SCHOOL_STUDENTS, Students_Already_Exist);
                    Students_Already_Exist++;
                }
                break;
            case PRINT_ALL_STUDENTS_DATA:
                Print_All_Students_Data(SCHOOL_STUDENTS, Students_Already_Exist);
                cmdGoToXY(1, 45);
                printf("Enter 0 to return the privous page: ");
                scanf("%d", &Return_Page_Value);
                break;
            case PRINT_STUDENT_DATA_ID_SEARCH:
                printf("Enter the student id\n");
                scanf("%d", &Student_Id);
                Print_Student_Data_Id(SCHOOL_STUDENTS, Student_Id, Students_Already_Exist);
                printf("Enter 0 to return the privous page: ");
                scanf("%d", &Return_Page_Value);
                break;
            case PRINT_STUDENT_DATA_NAME_SEARCH:
                printf("Enter the student name\n");
                Array_Scan(Student_Name);
                Print_Student_Data_Name(SCHOOL_STUDENTS, Student_Name, Students_Already_Exist);
                printf("Enter 0 to return the privous page: ");
                scanf("%d", &Return_Page_Value);
                break;
            case EDIT_STUDENT_DATA_ID_SEARCH:
                printf("Enter the student id\n");
                scanf("%d", &Student_Id);
                Edit_Student_Data_Id(SCHOOL_STUDENTS, Student_Id, Students_Already_Exist);
                break;
            case EDIT_STUDENT_DATA_NAME_SEARCH:
                printf("Enter the student name\n");
                Array_Scan(Student_Name);
                Edit_Student_Data_Name(SCHOOL_STUDENTS, Student_Name, Students_Already_Exist);
                break;
            case REMOVE_STUDENT_DATA_ID_SEARCH:
                printf("Enter the student id\n");
                scanf("%d", &Student_Id);
                Remove_Student_Data_Id(SCHOOL_STUDENTS, Student_Id, Students_Already_Exist);
                Students_Already_Exist--;
                break;
            case REMOVE_STUDENT_DATA_NAME_SEARCH:
                printf("Enter the student name\n");
                Array_Scan(Student_Name);
                Remove_Student_Data_Name(SCHOOL_STUDENTS, Student_Name, Students_Already_Exist);
                Students_Already_Exist--;
                break;
            case EXIT_ALL_PROGRAM_SYSTEMS:
                Exit_All_Programms();
                break;
            defualt:
                printf("NOT Valid Choice\n");
                break;
            }
        }
    }

    return 0;
}
