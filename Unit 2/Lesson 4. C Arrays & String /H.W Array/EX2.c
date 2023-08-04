/*
 * EX2.c
 *
 *  Created on: Aug 4, 2023
 *      Author: Ahmed Sami
 */


// C program to calculate Average using arrays

#include "stdio.h"

int main(void)
{
	int num;
	float avg, sum = 0;
	float arr[50];
	printf("Enter the numbers of data: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d", &num);
	while(num > 50 || num <0)
	{
		printf("ERROE! The number should be in range of (1 to 50).\n");
		printf("Enter the numbers of data: ");
			fflush(stdin);   fflush(stdout);
			scanf("%d", &num);
	}
	for(int i = 0; i < num; i++)
	{
		printf("%d. Enter number: ", i+1);
		fflush(stdin);      fflush(stdout);
		scanf("%f", &arr[i]);
		sum += arr[i];
	}
	avg = sum/num;
	printf("Average = %.2f", avg);
	return 0;
}
