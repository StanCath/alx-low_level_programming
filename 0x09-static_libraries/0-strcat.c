#include"main.h"

/**
 * _strcat - concatenates tow strings
 * @dest: Pointer to the string to be concatenated
 * @src: Source string to be appended to dest
 * Return: Pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;

	for (b = 0; src[b]; b++)
		dest[a++] = src[b];
	return (dest);
}
