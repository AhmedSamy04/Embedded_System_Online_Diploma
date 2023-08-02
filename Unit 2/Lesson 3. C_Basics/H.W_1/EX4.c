/*
 * EX4.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */


//Write C Program to Multiply two Floating Point Numbers

#include "stdio.h"

void main()
{
	float x, y;
	printf("Enter two numbers: ");
	fflush(stdin);    fflush(stdout);
	scanf("%f %f", &x, &y);
	printf("Product %f", x*y);
}
