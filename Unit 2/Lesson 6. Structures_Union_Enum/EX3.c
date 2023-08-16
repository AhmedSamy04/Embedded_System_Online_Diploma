/*
 * EX3.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmed Sami
 */

//C Program to add two complex numbers by passing structure to a function

#include"stdio.h"

typedef struct complex{
	float real;
	float img;
}complex;

complex add(complex num1, complex num2);

int main()
{
	complex num1, num2, sum;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively:\n");
	fflush(stdin);      fflush(stdout);
	scanf("%f %f", &num1.real, &num1.img);
	printf("For 2nd complex number\n");
	printf("Enter real and imaginary respectively:\n");
	fflush(stdin);      fflush(stdout);
	scanf("%f %f", &num2.real, &num2.img);
	sum = add(num1, num2);
	printf("Sum = %.1f + %.1fi", sum.real, sum.img);
	return 0;
}

complex add(complex num1, complex num2)
{
	complex sum;
	sum.real = num1.real + num2.real;
	sum.img = num1.img + num2.img;
	return sum;
}
