/*
 * EX2.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Ahmed Sami
 */


// C Program to calculate Factorial of a Number using Recursion

#include "stdio.h"
int factorial(int num);
int main()
{
	int num;
	printf("Enter an positive integer: ");
	fflush(stdin);    fflush(stdout);
	scanf("%d", &num);
	printf("Factorial of %d = %d", num, factorial(num));
	return 0;
}

int factorial(int num)
{
	if(num != 1)
		return num*factorial(num-1);
}
