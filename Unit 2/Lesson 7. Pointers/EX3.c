/*
 * EX3.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Ahmed Sami
 */

// Write a program in C to print a string in reverse using a pointer

#include"stdio.h"

int main()
{

	char str[50];
	char revstr[50];
	char *stptr = str;
	char *rvptr = revstr;
	int i = -1;
	printf("\n\nPointer : Print a string in reverse order :\n");
	printf("------------------------------------------------\n");
	printf("Input a string : ");
	fflush(stdin);      fflush(stdout);
	scanf("%s", str);
	while(*stptr)
	{
		stptr++;
		i++;
	}

	while(i >= 0)
	{
		stptr--;
		*rvptr = *stptr;
		rvptr++;
		i--;
	}
	*rvptr = '\0';
	printf("\nReverse of the string is : %s\n\n", revstr);
	return 0;
}
