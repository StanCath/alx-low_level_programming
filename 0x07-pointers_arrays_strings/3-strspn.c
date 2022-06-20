#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: string pointer
 * @accept: substring prefix to be looked for
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		c = 1;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c = 0;
				break;
			}
			b++;
		}
		if (c == 1)
			break;
		a++;
	}
	return (a);
}
