/*
 * EX.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */


// Write C program to check whether a number is even or odd


#include "stdio.h"

void main()
{
	int number;
	printf("Enter an integer you want to check: ");
	fflush(stdin);     fflush(stdout);
	scanf("%d", &number);
	if(number % 2 ==0)
		printf("%d is even", number);
	else
		printf("%d is odd", number);
}
