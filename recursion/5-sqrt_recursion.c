#include "main.h"
/**
 * racine - Displays a string
 *  of characters followed by a line break.
 * @n: The character string  | display.
 * @i: The character string  | check.
 * Return: The length of the string
 */
int racine(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (racine(n, i + 1));
}
/**
 *  _sqrt_recursion - Displays a string
 * of characters followed by a line break..
 * @n: The character string
 * Return: The length of the string
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (racine(n, 1));
}
