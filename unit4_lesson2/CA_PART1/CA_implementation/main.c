#include <stdio.h>
#include <stdlib.h>
#include "CA.h"
void setup()
{
    //init all the drivers
    //init IRQ..
    //init HAL Driver ..US Driver
    //init Block
    //set states pointer for each state
    CA_state=STATE(CA_WAITING);
    }


int main()
{
    volatile int d;
    setup();
    while(1)
    {
        CA_state();
        //delay
        for(d=0;d<=1000;d++);
    }

    return 0;
}
