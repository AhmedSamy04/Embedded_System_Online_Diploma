/*
 * EX5.c
 *
 *  Created on: Aug 4, 2023
 *      Author: Ahmed Sami
 */


// C Program to search an element in array

#include "stdio.h"

int main(void)
{
	int arr[50], num, element, i;
	printf("Enter no of elements: ");
	fflush(stdin);     fflush(stdout);
	scanf("%d", &num);

	for( i = 0; i < num; i++)
	{
		fflush(stdin);     fflush(stdout);
		scanf("%d", &arr[i]);
	}
	for( i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\nEnter the element to be searched: ");
	fflush(stdin);     fflush(stdout);
	scanf("%d", &element);

	i = 0;
	while(i < num  && element != arr[i])
	{
		i++;
	}

	if(i < num)
		printf("Number found at the location = %d", i+1);
	else
		printf("Number not found");

	return 0;
}
