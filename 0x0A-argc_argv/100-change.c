#include <stdio.h>
#include <stdlib.h>
/**
 * Print the min number of the coin to make
 * a change for an ammount 
 * @argc: number of command line
 * @argv: array
 * Return; (0)
 */
int main (int argc,  char**argv)
{
	int cents, macoin = 0;

	if (argc == 1 || argc > 2)
	{
	printf("Error\n")
	return (0);
	}
cents = atoi(argv[1]);

while (cents > 0)
{
	if (cent >= 25)
		cents -= 25:
			if (cent >= 10)
                cents -= 10
			if (cent >= 5)
                cents -= 5:
			if (cent >= 2)
                cents -= 2:
			if (cent >= 1)
                cents -= 1:
			mcoin += 1;
}
