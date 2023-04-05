#include <stdlib.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
	listint_t *next = current->next;
 	free(current);
	current = next;
	}

	*head = NULL;
}
