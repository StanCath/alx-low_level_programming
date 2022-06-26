#include"main.h"

/**
 * _strlen - returns the length of the string
 * @l: string parameter
 * Return: length of string
 */
int _strlen(char *l)
{
	int counter;

	for (counter = 0; *l != '\0'; ++l)
		++counter;
	return (counter);
}
