/*
 * EX2.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */



// Write C Program to Print a Integer Entered by a User


#include "stdio.h"

int main (void)
{
	int number;
	printf ("Enter an integer: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d", &number);
	printf ("You entered: %d", number);
	return 0;
}

