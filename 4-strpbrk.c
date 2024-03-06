#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - updates the value of the variable
 * @accept: the pointer points
 * @s: pointer to the variable to update
 *
 * Return: returns a result.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
