#include"main.h"

/**
 * _puts - prints a string'
 * @s: string variable
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
