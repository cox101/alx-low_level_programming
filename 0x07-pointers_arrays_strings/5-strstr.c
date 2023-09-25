#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search
 */

char *_strstr(char *haystack, char *needle)
{
	int index;
	/*Get length of needle for strncmp*/
	if (*needle == 0)
		return (haystack);

	/*compare substring*/
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do{
				if(needle[index + 1 ] == '\0')
			return (haystack);
		index++;
			}
			while (haystack[index] == needle[index]);

	}
		haystack++;
	}
	return ('\0');
}
