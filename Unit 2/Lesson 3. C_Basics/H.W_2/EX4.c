/*
 * EX4.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */


// Write C Program to check whether a number is Positive or Negative

#include "stdio.h"

int main()
{
	float num;
	printf("Enter a number: ");
	fflush(stdin);      fflush(stdout);
	scanf("%f", &num);
	if (num > 0)
		printf("%.1f is Positive.", num);
	else if (num < 0)
		printf("%.1f is Negative.", num);
	else
		printf("You entered Zero.");
	return 0;
}
