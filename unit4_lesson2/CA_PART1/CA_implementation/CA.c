#include"CA.h"
//variables
int CA_speed=0;
int CA_distance=0;
int CA_threshold=50;
//state pointer to function
void (*CA_state)();
STATE_define(CA_WAITING)
{
    //state name
    CA_STATE_ID=CA_Waiting;
    //state action
    CA_speed=0;
    //DC_motor(CA_speed)
    CA_distance=US_Get_distance_random(45,55,1);
    printf("CA_Waiting State: distance:%d  speed:%d\n",CA_distance,CA_speed);
    //state check
    (CA_distance<=CA_threshold)?(CA_state=STATE(CA_WAITING)):(CA_state=STATE(CA_DRIVING));

}
STATE_define(CA_DRIVING)
{
     //state name
    CA_STATE_ID=CA_Driving;
    //state action
    CA_speed=30;
    //DC_motor(CA_speed)
    CA_distance=US_Get_distance_random(45,55,1);
     printf("CA_driving State: distance:%d  speed:%d\n",CA_distance,CA_speed);

    //state check
    (CA_distance>CA_threshold)?(CA_state=STATE(CA_DRIVING)):(CA_state=STATE(CA_WAITING));


}
int US_Get_distance_random(int l,int r,int count)
 {
	 //this will generate random number in l and r
	 int i;
	 for(i=0;i<count;i++)
	 {
		 int rand_num=(rand()%(r-l+1))+l;
		 return rand_num;

	 }


 }
