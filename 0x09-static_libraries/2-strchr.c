#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: string pointer
 * @c: character to be located in the string
 * Return: first occurence of character or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
