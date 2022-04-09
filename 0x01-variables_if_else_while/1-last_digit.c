#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success/correct)
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit == 0)
	printf("last_digit of %d is 0 and is 0\n", n);
	else if (last_digit > 5)
	printf("last_digit of %d is %d and is greater than %\n", n, last_digit);
	else
	printf(last_digit of % d is % d is less than c and not 0\n", n, last_digit);

	return (0);
}
