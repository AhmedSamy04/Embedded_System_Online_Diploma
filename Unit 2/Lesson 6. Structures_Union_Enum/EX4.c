/*
 * EX4.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmed Sami
 */

//C Program to store info of students using structure

#include "stdio.h"

struct student{
	char name[50];
	int roll;
	float marks;
};

int main()
{
	struct student S[5];
	int i;
	printf("Enter information of students:\n");
	for(i=0; i<5; i++)
	{
		S[i].roll = i + 1;
		printf("\nFor roll number %d\n", S[i].roll);
		printf("Enter name: ");
		fflush(stdin);     fflush(stdout);
		scanf("%s", S[i].name);
		printf("Enter marks: ");
		fflush(stdin);     fflush(stdout);
		scanf("%f", &S[i].marks);
	}
	printf("\nDisplaying information of students: \n");
	for(i=0; i<5; i++)
	{
		printf("\nInformation of roll number %d:\n", i+1);
		printf("Name: %s", S[i].name);
		printf("\nMarks: %.1f", S[i].marks);
	}
	return 0;
}
