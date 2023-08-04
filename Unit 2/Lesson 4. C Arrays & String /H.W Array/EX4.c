/*
 * EX4.c
 *
 *  Created on: Aug 4, 2023
 *      Author: Ahmed Sami
 */


// C Program to insert an element in an array

#include "stdio.h"

int main(void)
{
	int arr[50], num, location, element;
	printf("Enter no of elements: ");
	fflush(stdin);     fflush(stdout);
	scanf("%d", &num);

	for(int i = 0; i < num; i++)
	{
		fflush(stdin);     fflush(stdout);
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\nEnter the element to be inserted: ");
	fflush(stdin);     fflush(stdout);
	scanf("%d", &element);
	printf("Enter the location: ");
	fflush(stdin);     fflush(stdout);
	scanf("%d", &location);
	for(int i = num; i >= location; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[location - 1] = element;
	num++;
	for(int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
