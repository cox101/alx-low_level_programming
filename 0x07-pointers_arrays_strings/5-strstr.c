#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len;
	/*Get length of needle for strncmp*/
	len = 0;
	while (needle[len] != '\0')
		len++;
	/*compare substring*/
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
