/*
 * EX1.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Ahmed Sami
 */



// Prime Numbers Between two intervals by making user defined function

#include "stdio.h"
int check_prime(int num);
int main()
{
	int num1, num2, i, isPrime;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);       fflush(stdout);
	scanf("%d %d", &num1, &num2);
	printf("Prime numbers between %d and %d are: ", num1, num2);

	for(i = num1+1; i < num2; i++)
	{
		isPrime = check_prime(i);
		if(isPrime == 0)
			printf("%d ", i);
	}
	return 0;
}

int check_prime(int num)
{
	int j, isPrime = 0;
	for(j = 2; j <= num/2; j++)
	{
		if(num % j == 0)
			isPrime = 1;
		break;
	}
	return isPrime;
}
