#include"main.h"

/**
 *_islower - function to check lowercase characters
 *@c: checks input of function
 *Return: 1 if c is lowercase, otherwise 0.
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);

	return (0);

}
