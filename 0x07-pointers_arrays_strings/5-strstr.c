#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search
 */

char *_strstr(char *haystack, char *needle)
{
	int len;
	/*Get length of needle for strncmp*/
	if (*needle == 0)
		return (haystack);

	/*compare substring*/
	while (*haystack )
	{
		len =0;
		if (haystack[len] == needle[len])
		{
			do{
				if(needle[len +1 ] == '\0')
			return (haystack);
		len++;
	}
	return ('\0');
}
