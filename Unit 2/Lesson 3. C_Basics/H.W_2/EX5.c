/*
 * EX5.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */

// Write C Program to check whether a character is an Alphabet or not

#include "stdio.h"

int main()
{
	char alpha;
	printf("Enter a character: ");
	fflush(stdin);    fflush(stdout);
	scanf("%c", &alpha);
	printf("%c is %s alphabet", alpha, (alpha >= 97 && alpha <= 122) || (alpha >= 65 && alpha <= 90)?"an":"not an");
	return 0;
}
