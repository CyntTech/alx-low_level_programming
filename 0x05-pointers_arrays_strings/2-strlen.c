#include "main.h"

/**
* _strlen - Function that returns the length of a string
* @s: A pointer to an int
*
*Return: void
*/

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
