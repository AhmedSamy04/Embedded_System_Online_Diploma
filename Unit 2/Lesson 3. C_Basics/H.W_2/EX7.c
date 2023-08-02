/*
 * EX7.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */


// Write C Program to find factorial of a number

#include "stdio.h"

int main()
{
	int num, fact = 1;
	printf("Enter an integer: ");
	fflush(stdin);      fflush(stdout);
	scanf("%d", &num);
	if (num < 0)
		printf("ERROR!!! Factorial of negative numbers doesn't exist.");
	else if (num == 0)
		printf("Factorial = %d", fact);
	else
	{
		for (int i = 1; i <= num; i++)
		{
			fact *= i;
		}

		printf("Factorial = %d", fact);
	}
	return 0;
}
