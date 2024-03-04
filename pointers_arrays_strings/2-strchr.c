#include "main.h"
/**
 * _strchr - Finds a given charactrer
 * @s: string being evaluated
 * @c: Character being searched for
 * Return: *s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return ('\0');
}
