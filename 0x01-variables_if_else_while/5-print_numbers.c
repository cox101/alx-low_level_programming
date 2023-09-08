/*
 * File: 5-print_numbers.c
 * Auth: cox101
 */
#include <stdio.h>

/**
 * main -   prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
*/

int main(void)
{
	int digit;

	for (digit = 0 ; digit < 10 ; digit++)
		printf("%d", digit);

	printf("\n");

	return (0);

}
