/*
 * EX2.c
 *
 *  Created on: Aug 4, 2023
 *      Author: Ahmed Sami
 */


#include<stdio.h>


void main(){
	char str[200];
	int i;
	printf("Enter a string: ");
	fflush(stdout);  fflush(stdin);
	gets(str);
	for(i = 0; str[i] != '\0'; i++);
	printf("Length of string: %d",i);
}
