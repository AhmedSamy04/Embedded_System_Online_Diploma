/*
 * EX8.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */

// Write C Program to make simple calculator

#include "stdio.h"

int main()
{
	float num1, num2, result;
	char operator;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdin);    fflush(stdout);
	scanf("%c", &operator);
	printf("Enter two operands: ");
	fflush(stdin);    fflush(stdout);
	scanf("%f %f", &num1, &num2);
	switch (operator)
	{
	case '*':
	{
		result = num1 * num2;
		printf("%.1f * %.1f = %.1f", num1, num2, result);
	}
	break;
	case '+':
	{
		result = num1 + num2;
		printf("%.1f + %.1f = %.1f", num1, num2, result);
	}
	break;
	case '-':
	{
		result = num1 - num2;
		printf("%.1f - %.1f = %.1f", num1, num2, result);
	}
	break;
	case '/':
	{
		result = num1 / num2;
		printf("%.1f / %.1f = %.1f", num1, num2, result);
	}
	break;
	default:
		printf("wrong choice");
	}
	return 0;
}
