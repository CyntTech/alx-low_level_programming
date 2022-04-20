#include "main.h"

/**
* print_array - Function that prints n elements of an array of integers
* @a: pointer to first int
* @n: pointer to second int
* Return: void
*/

void print_array(int *a, int n)

{
int i;

i = 0;
while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}

printf("\n")
;
}
