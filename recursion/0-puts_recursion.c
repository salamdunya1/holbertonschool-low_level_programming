#include "main.h"

/**
 * _puts_recursion - print value of array
 * @s: it is an array
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
