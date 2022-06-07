#include"main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 *
 * print_alphabet - prints the alphabets in lower case form a - z
 *
 * _putchar - uses putchar prototype
 *
 * Return: void
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
