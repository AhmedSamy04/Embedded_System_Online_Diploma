/*
 *  US.h
 *
 *  Created on: Nov 9, 2023
 *      Author: Ahmed Sami
 */

#ifndef  US_H_
#define  US_H_
#include "state.h"
//Define States
enum{
	 US_busy
} US_state_id;

//declare state Functions  US
STATE_define( US_busy);

void US_init();

//STATE Pointer to function
extern void (* US_state)();


#endif /*  US_H_ */
