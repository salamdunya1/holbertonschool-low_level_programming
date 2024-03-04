#include "main.h"
/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: initiale segment
 * @accept: byte to gets
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i])
				{
					len++;
				}
			}
		}
		else
		{
			return (len);
		}
	}
	return (len);
}
