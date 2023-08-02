/*
 * EX3.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */


// Write C Program to Add Two Integers

#include "stdio.h"

int main(void)
{
	int x , y;
	printf("Enter two integers : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Sum : %d",x+y);
	return 0;
}
