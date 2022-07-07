#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - A new struct type defining our print
 * @symbol: a symbol representing data type
 * @print: a function pointer to a function that prints a data
 *		type corresponding to the symbol
 */
typedef struct print
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

#endif /* VARIADIC_FUNCTIONS_H */
