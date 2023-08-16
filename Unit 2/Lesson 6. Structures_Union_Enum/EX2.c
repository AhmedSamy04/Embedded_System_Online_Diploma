/*
 * EX2.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmed Sami
 */

//C Program to Add two distances(in inch-feet) System using structures

#include "stdio.h"

struct distance
{
	int feet;
	float inch;
}dist1, dist2, sum;

int main()
{
	printf("Enter information for 1st distance");
	printf("\nEnter feet: ");
	fflush(stdin);      fflush(stdout);
	scanf("%d", &dist1.feet);
	printf("Enter inch: ");
	fflush(stdin);      fflush(stdout);
	scanf("%f", &dist1.inch);
	printf("\nEnter information for 2nd distance");
	printf("\nEnter feet: ");
	fflush(stdin);      fflush(stdout);
	scanf("%d", &dist2.feet);
	printf("Enter inch: ");
	fflush(stdin);      fflush(stdout);
	scanf("%f", &dist2.inch);
	sum.feet = dist1.feet + dist2.feet;
	sum.inch = dist1.inch + dist2.inch;
	if(sum.inch > 12.0)
	{
		sum.inch = sum.inch - 12.0;
		sum.feet++;
	}
	printf("\nSum of distance = %d\'-%.1f\"", sum.feet, sum.inch);

	return 0;
}

