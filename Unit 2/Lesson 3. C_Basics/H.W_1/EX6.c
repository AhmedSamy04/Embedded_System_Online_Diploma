/*
 * EX6.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */

//Write Source Code to Swap Two Numbers

#include "stdio.h"

void main()
{
float a, b, temp;
printf("Enter value of a: ");
fflush(stdin);     fflush(stdout);
scanf("%f", &a);
printf("Enter value of b: ");
fflush(stdin);     fflush(stdout);
scanf("%f", &b);
temp = a;
a = b;
b = temp;
printf("After swapping, value of a = %.2f \n", a);
printf("After swapping, value of b = %.2f \n", b);

}
