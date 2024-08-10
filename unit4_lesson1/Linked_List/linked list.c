#include "linked list.h"
struct SStudent* gpFirstStudent=NULL;
void AddStudent()
{
    struct SStudent* pNewstudent;
    struct SStudent* pLasStudent;
    char temp_text[40];


    //check list is empty==yes
    if(gpFirstStudent==NULL)
    {
        //create new list
        pNewstudent=(struct SStudent*)malloc(sizeof(struct SStudent));

        //assign it to gpFirstStudent
        gpFirstStudent=pNewstudent;
    }else //list contains records
    {
        //navigate until reach to the last record
        pLasStudent=gpFirstStudent;
        while(pLasStudent->PNextStudent)
        {
            pLasStudent=pLasStudent->PNextStudent;
        }
        //create new record
        pNewstudent=(struct SStudent*)malloc(sizeof(struct SStudent));
        pLasStudent->PNextStudent=pNewstudent;

    }
    //fill new record
    printf("\n Enter the ID: ");
    gets(temp_text);
    pNewstudent->student.ID=atoi(temp_text);

     printf("\n Enter Student full name: ");
    gets(pNewstudent->student.name);
    pNewstudent->student.ID=atoi(temp_text);

     printf("\n Enter the height: ");
    gets(temp_text);
    pNewstudent->student.height=atof(temp_text);

    // set the next pointer(new student)nill
    pNewstudent->PNextStudent=NULL;
}

int delete_student()
{
    char temp_text[40];
    unsigned int selected_id;
    //select the id
    printf("\n enter the student id to be deleted :");
    gets(temp_text);
    selected_id=atoi(temp_text);
    //list is not empty
    if(gpFirstStudent)
    {
        struct SStudent* pSelectedStudent=gpFirstStudent;
    struct SStudent* pPreviosStudent=NULL;
    //loop on all records
    while(pSelectedStudent)
    {
        //compare each node with the selected id
        if(pSelectedStudent->student.ID==selected_id)
        {
            if(pPreviosStudent)//the first is not selected id
            {
                pPreviosStudent->PNextStudent=pSelectedStudent->PNextStudent;


            }
            else//1st student==id
            {
                gpFirstStudent=pSelectedStudent->PNextStudent;

            }
            free(pSelectedStudent);
            return 1;
        }
        pPreviosStudent=pSelectedStudent;
        pSelectedStudent=pSelectedStudent->PNextStudent;

    }


    }
    printf("\n cannot find student ID.");
    return 0;
}
void view_students()
{
    struct SStudent* pCurrentStudent=gpFirstStudent;
    int count=0;
    if(gpFirstStudent==NULL)
    {
        printf("\n Empty List ");
    }
    else
    {
        while(gpFirstStudent)
        {
            printf("\n Record Number %d",count+1);
            printf("\n\t ID:%d",pCurrentStudent->student.ID);
            printf("\n\t Name:%s",pCurrentStudent->student.name);
            printf("\n\t height:%f",pCurrentStudent->student.height);
            pCurrentStudent=pCurrentStudent->PNextStudent;
            count++;
        }
    }



}
void Delete_All()
{
    struct SStudent* pCurrentStudent=gpFirstStudent;
    if(gpFirstStudent==NULL)
    {
        printf("\n Empty List ");
    }
    else
    {
        while(gpFirstStudent)
        {
            struct SStudent* pTempStudent=pCurrentStudent;
            pCurrentStudent=pCurrentStudent->PNextStudent;
            free(pTempStudent);

        }
    }

     gpFirstStudent==NULL;
}
int Get_Student()
{
    int count=0,student_index;
    char index[40];
    struct SStudent* pCurrentStudent=gpFirstStudent;

     if(gpFirstStudent==NULL)
    {
        printf("\n Empty List ");
    }
    else
        {
    printf("\nEnter the index:");
   gets(index);
   student_index=atoi(index);
   while(pCurrentStudent)
   {
   if(count==student_index)
   {
        printf("\n Record Number %d",count+1);
            printf("\n\t ID:%d",pCurrentStudent->student.ID);
            printf("\n\t Name:%s",pCurrentStudent->student.name);
            printf("\n\t height:%f",pCurrentStudent->student.height);

   }
   else
    {

      pCurrentStudent=pCurrentStudent->PNextStudent;
            count++;

   }
   }
        }
   return 0;
}
void List_Length()
{
    int count=0;
     struct SStudent* pCurrentStudent=gpFirstStudent;
      if(gpFirstStudent==NULL)
    {
        printf("\n Empty List ");
    }
     while(pCurrentStudent)
     {
          pCurrentStudent=pCurrentStudent->PNextStudent;
         count++;
     }
     printf("\n length of list is %d ",count);


}
void Get_Middle()
{
    int count=0;
    struct SStudent* Fast_Ptr=gpFirstStudent;
    struct SStudent* Slow_Ptr=gpFirstStudent;
    while(Fast_Ptr)
    {
        Fast_Ptr=Fast_Ptr->PNextStudent;
        Fast_Ptr=Fast_Ptr->PNextStudent;
        Slow_Ptr=Slow_Ptr->PNextStudent;
        count++;

    }
    printf("\n The Middle of List");
    printf("\n Record Number %d",count+1);
            printf("\n\t ID:%d",Slow_Ptr->student.ID);
            printf("\n\t Name:%s",Slow_Ptr->student.name);
            printf("\n\t height:%f",Slow_Ptr->student.height);


}
