#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Head of the list
 * @index: Index of the node, starting from 0
 *
 * Return: Pointer to the nth node of the list, or NULL if the node not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	return (current ? current : NULL);
}
