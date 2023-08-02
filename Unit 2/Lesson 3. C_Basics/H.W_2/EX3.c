/*
 * EX.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */


// Write C Program to find the largest number among three numbers

#include "stdio.h"

int main()
{
	float x, y, z;
	printf("Enter three numbers: ");
	fflush(stdin);      fflush(stdout);
	scanf("%f %f %f", &x, &y, &z);
	if(x>y)
	{
		if(x>z)
			printf("Largest number = %.2f", x);
		else
			printf("Largest number = %.2f", z);
	}
	else
		if(y>z)
			printf("Largest number = %.2f", y);
		else
			printf("Largest number = %.2f", z);
	return 0;
}
