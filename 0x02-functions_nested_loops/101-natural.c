#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always (Success)
  */
int main(void)
{
	int DigitOne, DigitTwo = 0;

	while (DigitOne < 1024)
	{
		if ((DigitOne % 3 == 0) || (DigitOne % 5 == 0))
		{
			DigitTwo += DigitOne;
		}

		DigitOne++;
	}

	printf("%d\n", DigitTwo);
	return (0);
}
