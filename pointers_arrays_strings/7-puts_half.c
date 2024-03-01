#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */
void puts_half(char *str) {
    int length = 0, i = 0;

    while (str[length])
        length++;

    for (i = (length + 1) / 2; str[i]; i++)
        putchar(str[i]);

    putchar('\n');
}
