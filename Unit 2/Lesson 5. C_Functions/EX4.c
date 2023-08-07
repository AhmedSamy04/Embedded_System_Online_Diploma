/*
 * EX4.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Ahmed Sami
 */


// C Program to calculate the power of a Number Using Recursion

#include "stdio.h"
int power(int num1, int num2);
int main()
{
	int num1, num2;
	printf("Enter base number: ");
	fflush(stdin);    fflush(stdout);
	scanf("%d", &num1);
	printf("Enter power number(positive integer): ");
	fflush(stdin);    fflush(stdout);
	scanf("%d", &num2);
	printf("%d^%d = %d", num1, num2, power(num1, num2));
	return 0;
}

int power(int num1, int num2)
{
	if(num2 >0)
		return num1*power(num1,num2-1);
	else
		return 1;
}
