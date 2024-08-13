#ifndef DC_MOTOR_H_INCLUDED
#define DC_MOTOR_H_INCLUDED
#include "state.h"
//state defination
enum{
    DC_idle,
    DC_busy
}DC_STATE_ID;
//declare state function CA
STATE_define(DC_IDLE);
STATE_define(DC_BUSY);
//int US_Get_distance_random(int l,int r,int count);
void DC_init();
 extern void (*DC_state)();


#endif // DC_MOTOR_H_INCLUDED
