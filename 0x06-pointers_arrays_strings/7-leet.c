#include"main.h"

/**
 * leet - Encodes a string to 1337
 * @s: string to be encoded
 * Return: @s
 */
char *leet(char *s)
{
	int a;
	int b;
	char letters[] = "aeotl";
	char up_letters[] = "AEOTL";
	char numbers[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; letters[b] != '\0'; b++)
		{
			if (s[a] == letters[b] || s[a] == up_letters[b])
				s[a] = numbers[b];
		}
	}
	return (s);
}
