/*
 * File: 9-print_comb.c
 * Auth: cox101
 */
#include <stdio.h>
/**
 * main -   prints all possible combinations of single-digit numbers
 *
 * Return: Always 0.
*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar((number % 10) + '0');
		if (number == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);

}
