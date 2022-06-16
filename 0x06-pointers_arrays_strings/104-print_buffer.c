#include"main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: buffer to be printed
 * @size: number of bytes to be printed
 */
void print_buffer(char *b, int size)
{
	int a, c;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%08x: ", a);
			c = 0;
			while (c < 10)
			{
				if (c % 2 == 0 && c != 0)
					printf(" ");
				if ((c + a) > size - 1)
				{
					printf("  ");
				}
				else
					printf("%.2x", b[a + c]);
				c++;
			}
			printf(" ");
			c = 0;
			while (c < 10)
			{
				if ((c + a) > size - 1)
					break;
				if (b[c + a] <= 31 || b[c + a] >= '~')
					b[c + a] = '.';
				putchar(b[c + a]);
				c++;
			}
			printf("\n");
		}
	}
}
