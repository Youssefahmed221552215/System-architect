#include"US.h"
//variables
int US_distance=0;
//state pointer to function
void (*US_state)();
void US_init()
{
    //init us driver
    printf("US_init\n");
}
STATE_define(US_BUSY)
{
    //state name
    US_STATE_ID=US_busy;
    //state action
    US_distance=US_Get_distance_random(45,55,1);
    printf("CA_Waiting State: distance:%d \n",US_distance);
    //US_state=STATE(US_BUSY);
    US_Set_distance( US_distance);
    US_state=ST_US_BUSY;
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
