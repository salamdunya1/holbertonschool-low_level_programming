#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - updates the value of the variable
 * @a: the pointer points to
 * Return: returns a result.
 */

void print_chessboard(char (*a)[8]);
{
	int i,j;


	for (i = 0; i < 8; i++)
	{
		for (i = 0; i < 8; i++)
			_putchar(a[i][j]);
	       _putchar('\n');
	}

}	
	       
