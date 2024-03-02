#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination
 * @src source
 *
 * Return: the copied string stored in the dest variable
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *mdlm = dest;

	for (; n != 0 && *src != '\0'; n--, src++)
	{
		*mdlm = *src;
		mdlm++;
	}
	for (; n != 0 && *mdlm != '\0'; n--, mdlm++)
		*mdlm = '\0';
	return (dest);
}
