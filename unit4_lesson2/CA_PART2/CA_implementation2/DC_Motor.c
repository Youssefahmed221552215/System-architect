#include "DC_Motor.h"
//variables
int dc_speed=0;
//state pointer to function
void (*DC_state)();
void DC_init()
{
    //init PWM
    printf("US_init\n");
}
void DC_Set_speed(int s)
{
    dc_speed=s;
   // DC_state=STATE(DC_BUSY);
    DC_state=ST_DC_BUSY;
     printf("\nCA---------speed=%d----->DC",dc_speed);
}
STATE_define(DC_IDLE)
{
    //state name
    DC_STATE_ID=DC_busy;

    printf("\nDC_idle State: speed:%d \n",dc_speed);
}
STATE_define(DC_BUSY)
{
    //state name
    DC_STATE_ID=DC_busy;
    //state action
    //CALL PWM to make speed =dc_speed
    printf("\nDC_busy State: speed:%d \n",dc_speed);
    //DC_state=STATE(DC_IDLE);
    DC_state=ST_DC_IDLE;
}
