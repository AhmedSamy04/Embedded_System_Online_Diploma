/*
 * EX2.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Ahmed Sami
 */

// Write C program to print all the alphabets using a pointer

#include"stdio.h"

int main()
{
	char alpha[27];
	int x;
	char *ptr;

	printf("Print all the alphabets:\n");
	ptr = alpha;

	for(x=0; x<26; x++)
	{
		*ptr = 'A' + x;
		ptr++;
	}

	ptr = alpha;

	for(x=0; x<26; x++)
		{
			printf(" %c ", *ptr);
			ptr++;
		}
	return 0;
}
