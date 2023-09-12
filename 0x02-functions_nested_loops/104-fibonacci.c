#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2;
	unsigned long int holdOne, holdTwo, holdThree;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
		{
			holdOne = (bk1 + bk2) / LARGEST;
			holdTwo = (bk1 + bk2) % LARGEST;
			holdThree = fr1 + fr2 + holdOne;
			fr1 = fr2, fr2 = holdThree;
			bk1 = bk2, bk2 = holdTwo;
			printf("%lu%010lu", fr2, bk2);
		}
		else
		{
			holdTwo = bk1 + bk2;
			bk1 = bk2, bk2 = holdTwo;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
