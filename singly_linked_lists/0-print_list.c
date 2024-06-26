#include "lists.h"
#include <stdio.h>

/**
*print_list - Prints all the elements of a list_t list
*@h: A pointer to the head of the list_t list
*
*Return: The number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		count++;
	}

	return (count);
}
