#include "main.h"

/**
 * _strpbrk - Function that searches a string for any set of bytes
 * @s: string pointer
 * @accept: pointer to string being searched for in @s
 * Return: null
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (s + a);
			b++;
		}
		a++;
	}
	return ('\0');
}
