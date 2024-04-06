#include "main.h"

/**
 * get_bit - fction
 * @index: var
 * @n: var
 * Return: error
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
return ((n >> index) & 1);
}
