#include"CA.h"
//variables
int CA_speed=0;
int CA_distance=0;
int CA_threshold=50;
void US_Set_distance(int d)
{
    CA_distance=d;
    //(CA_distance<=CA_threshold)?(CA_state=STATE(CA_WAITING)):(CA_state=STATE(CA_DRIVING));
    (CA_distance<=CA_threshold)?(CA_state=ST_CA_WAITING):(CA_state=ST_CA_DRIVING);
    printf("\nUS---------distance=%d----->CA\n",CA_distance);


}
//state pointer to function
void (*CA_state)();
STATE_define(CA_WAITING)
{
    //state name
    CA_STATE_ID=CA_Waiting;
     printf("\nCA_Waiting State: distance:%d  speed:%d\n",CA_distance,CA_speed);
    //state action
    CA_speed=0;
    DC_Set_speed(CA_speed);
    //DC_motor(CA_speed)

}
STATE_define(CA_DRIVING)
{
     //state name
    CA_STATE_ID=CA_Driving;
    CA_speed=30;
    //printf("CA_driving State: distance:%d  speed:%d\n",CA_distance,CA_speed);

    //state action
    DC_Set_speed(CA_speed);
    printf("\nCA_driving State: distance:%d  speed:%d\n",CA_distance,CA_speed);
    //DC_motor(CA_speed)

}

