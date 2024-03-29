#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: locates a substring
 * @needle: substring to be located
 * Return: pointer to the beginning of located substring
 *		or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
