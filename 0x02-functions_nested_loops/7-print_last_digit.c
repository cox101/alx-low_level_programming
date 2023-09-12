
#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @digit: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int digit)
{

	int LastDigit;

	LastDigit = (digit % 10);

	if (LastDigit < 0)
	{
		LastDigit = (-1 * LastDigit);
	}

	_putchar(LastDigit + '0');

	return (LastDigit);
}
