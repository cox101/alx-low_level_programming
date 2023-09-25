#include "main.h"

/**
 * _strncmp - Compares two strings within n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to compare.
 * 
 * Return: 0 if the strings are the same within the specified bytes, 
 *         otherwise, a value greater than or less than zero.
 */
int _strncmp(const char *s1, const char *s2, size_t n) {
    for (size_t i = 0; i < n; i++) {
        if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0') {
            return (s1[i] - s2[i]);
        }
    }
    return 0;
}

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search within.
 * @needle: The substring to find.
 * 
 * Return: A pointer to the first occurrence of the substring, 
 *         or NULL if the substring is not found.
 */
char *_strstr(const char *haystack, const char *needle) {
    size_t needle_len = strlen(needle);

    while (*haystack != '\0') {
        if (_strncmp(haystack, needle, needle_len) == 0) {
            return (char *)haystack;
        }
        haystack++;
    }

    return NULL;
}

