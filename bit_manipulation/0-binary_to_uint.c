#include "main.h"

/**
 * binary_to_uint - fction
 * @b: var
 * Return: dec
 */

unsigned int binary_to_uint(const char *b)
{

int i;
unsigned int dec = 0;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec = 2 * dec + (b[i] - '0');
}
return (dec);
}
