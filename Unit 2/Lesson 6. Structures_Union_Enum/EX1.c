/*
 * EX1.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmed Sami
 */

// C Program to store info(name, roll and marks) of a student using structure

#include "stdio.h"

struct student{
	char name[50];
	int roll;
	float marks;
};

int main()
{
	struct student S;
	printf("Enter information of students:\n");
	printf("\nEnter name: ");
	fflush(stdin);        fflush(stdout);
	scanf("%s", S.name);
	printf("Enter roll number: ");
	fflush(stdin);        fflush(stdout);
	scanf("%d", &S.roll);
	printf("Enter marks: ");
	fflush(stdin);        fflush(stdout);
	scanf("%f", &S.marks);
	printf("\nDisplaying Information");
	printf("\nname: %s", S.name);
	printf("\nRoll: %d", S.roll);
	printf("\nMarks: %.2f", S.marks);
	return 0;
}
