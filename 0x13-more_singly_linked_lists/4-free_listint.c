#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees list.
 * @head: Pointer to head of list.
 */

void free_listint(listint_t *head)
{
listint_t *current, *temp;

current = head;
while (current != NULL)
{
temp = current->next;
free(current);
current = temp;
}
}

