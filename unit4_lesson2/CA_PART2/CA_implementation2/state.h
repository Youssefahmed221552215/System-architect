#ifndef STATE_H_INCLUDED
#define STATE_H_INCLUDED
//automatic state function generation
#define STATE_define(STATE_FUN) void ST_##STATE_FUN()
//#define STATE(STATE_FUN) ST_##STATE_FUN
//states connection
void US_Set_distance(int d);
void DC_Set_speed(int s);


#endif // STATE_H_INCLUDED
