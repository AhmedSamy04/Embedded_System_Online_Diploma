/*
 * DC.c
 *
 *  Created on: Nov 9, 2023
 *      Author: Ahmed Sami
 */


#include "DC.h"
//variables
int DC_speed = 0;

//STATE Pointer to function
void (*DC_state)();

void DC_init ()
{
	//init PWM
	printf("DC init \n");
}

void DC_motor (int s)
{
	DC_speed = s;
	DC_state = STATE(DC_busy);
	printf("CA -------speed = %d--------> DC \n", DC_speed);
}

STATE_define (DC_idle)
{
	//State_Name
	DC_state_id = DC_idle;

	//State_Action
	//call PWM to make speed = DC_speed

	printf("DC_idle State: Speed = %d \n", DC_speed);
}

STATE_define (DC_busy)
{
	//State_Name
	DC_state_id = DC_busy;

	//State_Action
	//call PWM to make speed = DC_speed

	DC_state = STATE(DC_idle);
	printf("DC_busy State: Speed = %d \n", DC_speed);

}

