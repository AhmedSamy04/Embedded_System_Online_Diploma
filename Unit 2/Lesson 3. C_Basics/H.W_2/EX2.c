/*
 * EX2.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Ahmed Sami
 */


// Write C Program to check Vowel or Consonant

#include "stdio.h"

int main()
{
	char alpha;
	printf("Enter an alphabet: ");
	fflush(stdin);     fflush(stdout);
	scanf("%c", &alpha);
	if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
		printf("%c is a vowel.", alpha);
	else
		printf("%c is a consonant.", alpha);
	return 0;
}
