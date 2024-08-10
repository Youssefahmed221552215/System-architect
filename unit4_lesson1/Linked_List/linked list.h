#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "conio.h"
//effective data
struct Sdata{
    int ID;
    char name[40];
    float height;
};
//linked list node
struct SStudent{
    struct Sdata student;
    struct SStudent* PNextStudent;
};

void AddStudent();
int delete_student();
void view_students();
void Delete_All();
int Get_Student();
void List_Length();
void Get_Middle();



#endif // LINKED_LIST_H_INCLUDED
