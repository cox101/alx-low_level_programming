/* 
 * File: 2-print_alphabet.c
 * Auth: cox101
 */
#include <stdio.h>

/*
 * main - print the alphabet in lowercase.
 *
 * Return : 0 Always 
 */

int main(void)
{
       char letter;

        for(letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
