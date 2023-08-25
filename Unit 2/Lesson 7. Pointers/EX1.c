/*
 * EX1.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Ahmed Sami
 */

// Write C program to demonstrate how to handle the pointers in the program

#include "stdio.h"

int main()
{
	int* ab;
	int m;
	m=29;

	printf("Addresse of m : %p\n", &m);
	printf("value of m : %d\n", m);

	ab = &m;

	printf("Now ab is assigned with the address of m.");
	printf("Address of pointer ab : %p\n", ab);
	printf("Content of pointer ab : %d\n", *ab);

	m = 34;

	printf("The value of m assigned to 34 now.");
	printf("Address of pointer ab : %p\n", ab);
	printf("Content of pointer ab : %d\n", *ab);

	*ab = 7;

	printf("The pointer variable ab is assigned with the value 7 now.");
	printf("Address of m : %p\n", &m);
	printf("value of m : %d\n", m);
	return 0;
}
