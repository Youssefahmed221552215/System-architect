#include "linked list.h"

void main()
{
    char temp_text[40];
    while(1)
    {
        printf("\n================");
        printf("\n\tChoose on of the following options\n");
        printf("\n1:Addstudent");
        printf("\n2:Delete_Student");
        printf("\n3:View_Students");
        printf("\n4:Delete_All");
        printf("\n5:Get_Student");
        printf("\n6:List_Length");
        printf("\n7:Get_Middle");
        printf("\nEnter Option Number:");
        gets(temp_text);
        switch (atoi(temp_text))
        {
        case 1:
            AddStudent();
            break;
       case 2:
            delete_student();
            break;
             case 3:
           view_students();
            break;
             case 4:
            Delete_All();
            break;
            case 5:
            Get_Student();
            case 6:
            List_Length();
            break;
             case 7:
            Get_Middle();
            break;
             default:
                printf("\n Wrong Option");
                break;
        }


    }








}
