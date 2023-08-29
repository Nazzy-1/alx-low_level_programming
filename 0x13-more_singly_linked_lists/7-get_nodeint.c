#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node of a linked list.
 * @head: Pointer to head of list.
 * @index: Index of the node.
 *
 * Return: Pointer to node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
return (current);

count++;
current = current->next;
}

return (NULL);
}

