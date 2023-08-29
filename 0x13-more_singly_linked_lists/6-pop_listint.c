#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes head node of linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The data stored in head node.
 */

int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);

data = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);

return (data);
}

