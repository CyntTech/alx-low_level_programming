#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: arguments
 * Return: summation of all parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list summation;
	unsigned int i;
	int sum;
	sum = 0;

	if (n == 0)
		return (0);

	va_start(summation, n);

	for(i = 0; i < n; i++)
		sum += va_arg(summation, int);

	va_end(summation);

	return (sum);
}
