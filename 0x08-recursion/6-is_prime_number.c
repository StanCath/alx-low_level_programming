#include "main.h"

/**
 * is_divisible - Checks the divisibility of a number
 * @num: number to bechecked
 * @div: divisor
 * Return:	if number is divisible - 0
 *		if number not divisible - 1
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: number to be checked
 * Return:	integer is not prime - 0
 *		integer is prime - 1.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
