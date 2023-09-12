
#include "main.h"
/**
  * print_times_table - Prints a multiplication table up to param
  * @n: The number to be treated
  *
  * Return: Number matrix
  */
void print_times_table(int n)
{
	int NumberOne, NumberTwo, NumberThree;

	if (n >= 0 && n <= 14)
	{
		for (NumberOne = 0; NumberOne <= n; NumberOne++)
		{
			for (NumberTwo = 0; NumberTwo <= n; NumberTwo++)
			{
				NumberThree = NumberOne * NumberTwo;
				if (NumberThree > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((NumberThree / 100) + '0');
					_putchar(((NumberThree / 10) % 10) + '0');
					_putchar((NumberThree % 10) + '0');
				}
				else if (NumberThree > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((NumberThree / 10) % 10) + '0');
					_putchar((NumberThree % 10) + '0');
				}
				else
				{
					if (NumberTwo != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(NumberThree + '0');
				}
			}
			_putchar('\n');
		}
	}
}
