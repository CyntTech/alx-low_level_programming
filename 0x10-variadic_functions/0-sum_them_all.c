#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: arguments passed to the function
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list figures;
	unsigned int i;

	int sum;
	sum = 0;

	if (n == 0)
		return (0);

	va_start(figures, n);

	for(i = 0; i < n; i++)
		sum += va_arg(figures, int);

	va_end(figures);

	return (sum);
}
