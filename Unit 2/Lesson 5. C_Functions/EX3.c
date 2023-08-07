/*
 * EX3.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Ahmed Sami
 */


// C Program to Reverse a Sentence Using Recursion

#include "stdio.h"
#include "string.h"
void Reverse(char str[], int count);
int main()
{
	char str[1000];
	printf("Enter a sentence: ");
	fflush(stdin);     fflush(stdout);
	gets(str);
	Reverse(str, strlen(str)-1);
	return 0;
}

void Reverse(char str[], int count)
{
	if(count >= 0)
	{
		printf("%c", str[count]);
		Reverse(str, count-1);
	}
}
