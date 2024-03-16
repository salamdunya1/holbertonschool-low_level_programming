#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the size of the memory to print
 * @n: number of bytes to concatenates
 * Return: 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *sconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != 0; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != 0; i++)
		len2++;

	sconcat = malloc(sizeof(char) * (len1 + n) + 1);

	if (sconcat == NULL)
	{
		return (NULL);
	}
	if (len2 <= n)
	{
		for (i = 0; s1[i] != 0; i++)
			sconcat[i] = s1[i];
		for (i = 0; s2[i] != 0; i++)
			sconcat[len1 + i] = s2[i];
		sconcat[len1 + i] = 0;
	}
	else
	{
		for (i = 0; s1[i] != 0; i++)
			sconcat[i] = s1[i];
		for (i = 0; i < n; i++)
			sconcat[len1 + i] = s2[i];
	}
	sconcat[len1 + i] = '\0';
	return (sconcat);
}
