#include "lists.h"

/**
 * sum_listint - Returns the sum of all data of a linked list.
 * @head: Pointer to head of list.
 *
 * Return: Sum of all the data.
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}

