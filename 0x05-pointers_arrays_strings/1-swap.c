#include"main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integerto be swapped
 * @b: second integer to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
