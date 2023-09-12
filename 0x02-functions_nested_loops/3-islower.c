#include "main.h"

/**
 * _islower - a function that checks for alphabetic character
 * @c: single letter input
 * Return: 1 if is a character (lower or uppercase), 0 otherwise
 */
int _islower(int character)
{
	if (character  >= 'a' && character <= 'z')
		return (1);
	else
		return (0);
}
