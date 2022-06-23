#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palind_recursive - Checks if two chars of a string are equal
 * @a: first index
 * @b: last index
 * @s: string
 * Return:	if equal - 1
 *		if not equal - 0
 */
int is_palind_recursive(char *s, int a, int b)
{
	if (a == b)
		return (1);
	if (a == b - 1)
		return (s[a] == s[b]);
	if (s[a] != s[b])
		return (0);
	return (is_palind_recursive(s, a + 1, b - 1));
}

/**
 * is_palindrome - Checks if a string is palindrome
 * @s: the string
 * Return:	if string is palindrome - 1
 *		if string is not palindrome - 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || *s != s[len - 1])
		return (0);
	return (is_palind_recursive(s, 0, (len - 1)));
}


