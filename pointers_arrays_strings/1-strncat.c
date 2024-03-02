#include "main.h"
/**
* _strncat - concat 2 string
* @dest: dest string
* @src:src string
* @n: integer
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
