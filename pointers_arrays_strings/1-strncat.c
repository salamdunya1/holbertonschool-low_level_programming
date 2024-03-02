#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates two strings up to n bytes from src
 * @dest: The destination string
 * @src: The source string to append to dest
 * @n: The maximum number of bytes to append from src
 *
 * Return: Pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*ptr != '\0')
        ptr++;

    while (*src != '\0' && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    *ptr = '\0';

    return dest;
}
i

