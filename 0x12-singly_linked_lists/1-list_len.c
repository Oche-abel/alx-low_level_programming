#include "lists.h"
#include <stdio.h>

/**
 * list_len - Finds the elements in a linked list_t list
 * @h: The list_t list
 * Return: The number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
