/*
 * File: 100-print_comb3.c
 * Auth: cox101
 */
#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits.
 *
 * Return: Always 0.
*/
int main(void)
{
	int Number1, Number2;

	for ( Number1 = 0;  Number1 < 9;  Number1++)
	{
		for ( Number2 =  Number1 + 1;  Number2 < 10;  Number2++)
		{
			putchar(( Number1 % 10) + '0');
			putchar(( Number2 % 10) + '0');

			if ( Number1 == 8 &&  Number2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
