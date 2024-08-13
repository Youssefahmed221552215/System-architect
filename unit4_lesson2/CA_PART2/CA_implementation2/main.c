#include <stdio.h>
#include <stdlib.h>
#include "CA.h"
#include "US.h"
#include "DC_Motor.h"
void setup()
{
    //init all the drivers
    //init IRQ..
    //init HAL Driver ..US Driver
    //init Block
     US_init();
    DC_init();
    //set states pointer for each state
   // CA_state=STATE(CA_WAITING);
    //US_state=STATE(US_BUSY);
    //DC_state=STATE(DC_IDLE);
    CA_state=ST_CA_WAITING;
    US_state=ST_US_BUSY;
    DC_state=ST_DC_IDLE;

    }


int main()
{
    volatile int d;
    setup();
    while(1)
    {
        US_state();
        CA_state();
        DC_state();
        //delay
        for(d=0;d<=1000;d++);
    }

    return 0;
}
