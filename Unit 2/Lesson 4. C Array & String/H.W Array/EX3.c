/*
 * EX3.c
 *
 *  Created on: Aug 4, 2023
 *      Author: Ahmed Sami
 */


// C Program to find transpose of a matrix

#include "stdio.h"

int main(void)
{
	int rows, columns, a[10][10], trans[10][10];
	printf("Enter rows and columns of matrix: ");
	fflush(stdin);        fflush(stdout);
	scanf("%d %d", &rows, &columns);
	printf("\nEnter elements of matrix:\n");
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			printf("Enter element a%d%d: ", i+1, j+1);
			fflush(stdin);     fflush(stdout);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nEntered Matrix\n");
	for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < columns; j++)
			{
				printf("%d  ", a[i][j]);
				if(j==columns-1)
					printf("\n\n");
			}
		}

	for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < columns; j++)
			{
				trans[j][i] = a[i][j];
			}
		}
	printf("\n Transposed of Matrix\n");
		for(int i = 0; i < columns; i++)
			{
				for(int j = 0; j < rows; j++)
				{
					printf("%d  ", trans[i][j]);
					if(j==rows-1)
						printf("\n\n");
				}
			}
	return 0;
}
