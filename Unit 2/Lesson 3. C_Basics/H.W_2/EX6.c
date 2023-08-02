/*
 * EX6.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */


// Write C Program to calculate Sum of Natural Numbers

#include "stdio.h"

int main()
{
	int num, sum = 0;
	printf("Enter an integer: ");
	fflush(stdin);      fflush(stdout);
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	printf("Sum = %d", sum);
	return 0;
}
