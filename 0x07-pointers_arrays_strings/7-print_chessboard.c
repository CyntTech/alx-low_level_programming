#include "main.h"

/**
* print_chessboard - Function that prints the chessboard
* @a: size of 2D array
* Return: nothing
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		_putchar ('\n');
		i++; /*add +1*/
	}

}
