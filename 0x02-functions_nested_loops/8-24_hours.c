#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * hour, minute
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int Hour, Minute;

	for (Hour = 0; Hour < 24; Hour++)
	{
		for (Minute = 0; Minute < 60; Minute++)
		{
			_putchar((Hour / 10) + '0');
			_putchar((Hour % 10) + '0');
			_putchar(':');
			_putchar((Minute / 10) + '0');
			_putchar((Minute % 10) + '0');
			_putchar('\n');
		}
	}
}
