/*
 * EX1.c
 *
 *  Created on: Aug 4, 2023
 *      Author: Ahmed Sami
 */


#include <stdio.h>

int main(void) {
	char str[200], ch;
	int count = 0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);
	printf("Enter a character to find frequency: " );
	fflush(stdin);  fflush(stdout);
	scanf("%c",&ch);
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i]==ch)
			count++;
	}
	printf("Length of string: %d",count);
	return 0;
}

