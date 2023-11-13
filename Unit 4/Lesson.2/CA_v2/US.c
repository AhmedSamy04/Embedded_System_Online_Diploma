/*
 * US.c
 *
 *  Created on: Nov 9, 2023
 *      Author: Ahmed Sami
 */


#include "US.h"
//variables
int US_distance = 0;


//STATE Pointer to function
void (*US_state)();
int US_Get_distance_random (int l, int r, int count);

void US_init ()
{
	//init US Driver
	printf("US_init \n");
}
STATE_define (US_busy)
{
	//State_Name
	US_state_id = US_busy;

	//State_Action
	US_distance = US_Get_distance_random (45, 55, 1);

	printf("US_Waiting State: distance = %d \n", US_distance);
	US_Set_distance(US_distance);
	US_state = STATE(US_busy);
}


int US_Get_distance_random (int l, int r, int count)
{
	//this will generate random number in range l and r
	int i;
	for (i = 0; i < count; i++)
	{
		int rand_num = (rand() % (r - 1 + 1)) + l;
		return rand_num;
	}

}
