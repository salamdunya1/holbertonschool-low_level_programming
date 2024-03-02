#include "main.h"

/** 
* cap_string - converts string words to uppercase
* @str: string
* Return: 
 */

char *cap_string(char *str)
{
    int i;
    char separators[] = " \t\n,;.!?\"(){}";

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;

    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (strchr(separators, str[i - 1]) != NULL)
            {
                str[i] -= 32;
            }
        }
    }

    return str;
}
