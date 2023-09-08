/*
 * File: 6-print_numberz.c
 * Auth: cox101
 */
#include <stdio.h>
/**
 * main -   Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
*/

int main(void)
{
	int figure;

	for (figure = 0 ; figure < 10 ; figure++)
		putchar((figure % 10) + '0');

	putchar('\n');

	return (0);
}
