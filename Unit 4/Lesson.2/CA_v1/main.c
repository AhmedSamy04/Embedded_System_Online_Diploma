/*
 * main.c
 *
 *  Created on: Nov 9, 2023
 *      Author: Ahmed Sami
 */

#include "CA.h"

void setup ()
{
	//init all the drivers
	//init interrupt
	//init HAL US_Driver DC_Driver
	// init Block
	//Set States pointers= for each Block
	CA_state = STATE (CA_waiting);
}

void main ()
{
	volatile int d;
	setup();
	while (1)
	{
		//call state for each Block
		CA_state();
		for (d = 0; d <= 1000; d++);
	}
}
