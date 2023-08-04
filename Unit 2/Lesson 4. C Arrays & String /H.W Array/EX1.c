/*
 * EX1.c
 *
 *  Created on: Aug 4, 2023
 *      Author: Ahmed Sami
 */


// Write C Program to find sum if 2 matrix of order 2*2

#include <stdio.h>

int main(void)
{
	float a[2][2], b[2][2], c[2][2];
	printf("Enter the Elements of 1st matrix\n");
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdin);    fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}
	printf("Enter the Elements of 2nd matrix\n");
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("Enter b%d%d: ", i+1, j+1);
			fflush(stdin);    fflush(stdout);
			scanf("%f", &b[i][j]);
		}
	}
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for(int i = 0; i < 2; i++)
		{
			for(int j = 0; j < 2; j++)
			{
				printf("%.1f\t", c[i][j]);
				if(j==1)
					printf("\n");
			}
		}
	return 0;
}
