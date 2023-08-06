/*
 * EX3.c
 *
 *  Created on: Aug 4, 2023
 *      Author: Ahmed Sami
 */


#include<stdio.h>
#include<string.h>


void main(){
	char str[1000];

	printf("Enter the string : ");
	fflush(stdin); fflush(stdout);
	gets(str);

	printf("Reverse string is: ");

	for(int i = 1 ; i <= strlen(str); i++)
	{
		printf("%c",str[strlen(str)-i]);
	}
}
