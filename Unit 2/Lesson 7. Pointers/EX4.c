/*
 * EX4.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Ahmed Sami
 */


// Write a program in C to print the elements of an array in reverse order.

#include"stdio.h"

int main()
{
	int num , i , arr[15];
	int *ptr;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin);         fflush(stdout);
	scanf("%d", &num);
	ptr = &arr[0];
	printf("Input %d number of elements in the array : \n", num);
	for(i=0; i<num; i++)
	{
		printf("element - %d : ", i+1);
		fflush(stdin);         fflush(stdout);
		scanf("%d", ptr);
		ptr++;
	}

	ptr = &arr[num-1];

	printf("\nThe elements of array in reverse order are :");
	for(i=num; i>0; i--)
	{
		printf("\nelement - %d : %d", i, *ptr);
		ptr--;
	}
	return 0;

}
