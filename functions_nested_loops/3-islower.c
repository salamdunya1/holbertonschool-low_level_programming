#include "main.h"

/**
 * _islower - checks whether a given character is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if @c is lowercase
 *         0 otherwise
 *
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
