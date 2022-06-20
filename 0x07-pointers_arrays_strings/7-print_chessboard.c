#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: input pointer
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; a[b][7]; b++)
	{
		for (c = 0; c < 0; c++)
			_putchar(a[b][c]);
	}
	_putchar('\n');
}
