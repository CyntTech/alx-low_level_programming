#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * Return: printed numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list figures;
	unsigned int i;

	int x;

	x = 0;

	va_start(figures, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(figures, int);
		if (i < (n - 1) && separator != NULL)

			printf("%d%s", x, separator);
		else
			printf("%d", x);

	}
	va_end(figures);
	printf("\n");
}
