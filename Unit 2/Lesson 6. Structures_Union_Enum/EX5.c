/*
 * EX5.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmed Sami
 */

//C Program to find area of a circle, passing arguments to macros

#include "stdio.h"

#define PI 3.14
#define area(r) (PI*r*r)

int main()
{
	int radius;
	float area;
	printf("Enter the radius: ");
	fflush(stdin);       fflush(stdout);
	scanf("%d", &radius);
	area = area(radius);
	printf("Area = %.2f", area);
	return 0;
}
