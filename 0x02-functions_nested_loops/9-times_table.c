#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * row, column, digits of the current result
 * Return: times table
 * Add extra space past single-digit
 */
void times_table(void)
{
	int row, column, digit;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
			d = (row * column);
			if ((digit / 10) > 0)
			{
				_putchar((digit / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((digit % 10) + '0');

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
