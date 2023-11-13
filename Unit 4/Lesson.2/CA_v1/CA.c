/*
 * CA.c
 *
 *  Created on: Nov 9, 2023
 *      Author: Ahmed Sami
 */


#include "CA.h"
//variables
int CA_speed = 0;
int CA_distance = 0;
int CA_threshold = 50;

//STATE Pointer to function
void (*CA_state)();
int US_Get_distance_random (int l, int r, int count);

STATE_define (CA_waiting)
{
	//State_Name
	CA_state_id = CA_waiting;
	//State_Action
	//DC_Motor(CA_speed)
	CA_speed = 0;

	//Event_Check
	//US_Get_distance(CA_distance)
	CA_distance = US_Get_distance_random (45, 55, 1);
	(CA_distance <= CA_threshold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));
	printf("CA_Waiting State: distance = %d Speed = %d \n", CA_distance, CA_speed);
}

STATE_define (CA_driving)
{
	//State_Name
	CA_state_id = CA_driving;
	//State_Action
	//DC_Motor(CA_speed)
	CA_speed = 30;

	//Event_Check
	//US_Get_distance(CA_distance)
	CA_distance = US_Get_distance_random (45, 55, 1);
	(CA_distance <= CA_threshold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));
	printf("CA_driving State: distance = %d Speed = %d \n", CA_distance, CA_speed);

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
