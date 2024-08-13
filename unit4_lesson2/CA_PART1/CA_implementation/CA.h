#ifndef CA_H_INCLUDED
#define CA_H_INCLUDED
#include "state.h"
//state defination
enum{
    CA_Waiting,
    CA_Driving
}CA_STATE_ID;
//declare state function CA
STATE_define(CA_WAITING);
STATE_define(CA_DRIVING);
int US_Get_distance_random(int l,int r,int count);

 extern void (*CA_state)();
#endif // CA_H_INCLUDED
