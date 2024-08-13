#ifndef US_H_INCLUDED
#define US_H_INCLUDED
#include "state.h"
//state defination
enum{
    US_busy
}US_STATE_ID;
//declare state function CA
STATE_define(US_BUSY);
int US_Get_distance_random(int l,int r,int count);
void US_init();
 extern void (*US_state)();


#endif // US_H_INCLUDED
