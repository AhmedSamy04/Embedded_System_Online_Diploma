/*
 * CA.h
 *
 *  Created on: Nov 9, 2023
 *      Author: Ahmed Sami
 */

#ifndef CA_H_
#define CA_H_
#include "state.h"
//Define States
enum{
	CA_waiting,
	CA_driving
}CA_state_id;

//declare state Functions CA
STATE_define(CA_waiting);
STATE_define(CA_driving);

//STATE Pointer to function
extern void (*CA_state)();


#endif /* CA_H_ */
