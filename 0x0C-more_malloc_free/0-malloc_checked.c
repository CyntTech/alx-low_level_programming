#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: sizeof int
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *uc;

	uc = malloc(b);
	if (uc == NULL)
		exit(98);
	else
		return (uc);
}
