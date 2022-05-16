#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: printed numbers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list character;
	unsigned int i;

	char *x;


	va_start(character, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(character, char*);
		if (x == NULL)
			printf("(nil)");
		else
		{
			if (i < (n - 1) && separator != NULL)
				printf("%s%s", x, separator);
			else
			printf("%s", x);
		}
	}
	va_end(character);
	printf("\n");
}
