/* 
 * File: 2-print_alphabet.c
 * Auth: cox101
 */
#include <stdio.h>

/*
* main - print the alphabet in lowercase, followed by a new line
*
* Return : 0 Always 
*/
int main(void)
{
       char letter;

        for (letter = 'f'; letter <= 'q'; letter++)
	       putchar(letter);	
	       	putchar('\n);

        return (0);
}
