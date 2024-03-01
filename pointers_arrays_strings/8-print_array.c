#include <stdio.h>
#include "main.h"


/**
 * print_array - function that print n elements of an array of integers
 * @n : numbers of elements of the array
 * @a : the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);

		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
