#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* Month: month in number format
* Day: day of the month
* Year: year
* Return: void
*/

void print_remaining_days(int Month, int Day, int Year)
{
	if ((Year % 4 == 0) && (Year % 400 == 0 || Year % 100 != 0))
	{
		if (Month >= 3 && Day >= 60)
		{
			Day++;
		}

		printf("Day of the year: %d\n", Day);
		printf("Remaining days: %d\n", 366 - Day);
	}
	else
	{
		if (Month == 2 && Day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", Month, day - 31, Year);
		}
		else
		{
			printf("Day of the year: %d\n", Day);
			printf("Remaining days: %d\n", 365 - Day);
		}
	}
}
