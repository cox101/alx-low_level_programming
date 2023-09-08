/*
 * File: 0-positive_or_negative.c
 * Auth: cox101
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* main - prints a random numbers and states whether
*         is a positive or a negative or zero
* Return : 0 If successful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d positive\n", n);
	else if (n < 0)
		printf("%d negativee\n", n);
	else		
		printf("%d zero\n", n);

	return (0);
}
