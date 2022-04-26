#include "main.h"

/**
* _strpbrk - Function that searches a string for set of bytes
* @s: string to be checked.
* @accept: Bytes to accept
* Return: a pointer to the byte in s
**/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++;
		}

		s++;
	}
	return (0);

}
