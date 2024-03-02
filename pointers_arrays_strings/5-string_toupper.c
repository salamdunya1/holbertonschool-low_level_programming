#include "main.h"

/**
 * string_toupper - converts lovercase to uppercase
 * @s: input string
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		if (s[j] > 96 && s[j] < 123)
			s[j] -= 32;
	return (s);
}
