/*
 * EX5.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */


//Write C Program to Find ASCII Value of a Character

#include "stdio.h"

void main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdin);     fflush(stdout);
	scanf("%c", &x);
	printf("ASCII value of %c = %d", x, x);
}
