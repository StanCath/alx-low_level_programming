#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination of the string
 * @src: source of the string
 * Return: pointer to the destination of string
 */
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';
	return (dest);
}
