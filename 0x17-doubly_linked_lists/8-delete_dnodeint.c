#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a linked list.
 * @head: Double pointer to the head.
 * @index: Index.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *auxillary;

	if (*head == NULL || head == NULL)
		return (-1);
	auxillary = *head;
	if (index == 0 && (*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	else if (index == 0 && (*head)->next != NULL)
	{
		(*head) = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}
	while (auxillary)
	{
		if (i == index - 1 && auxillary->next != NULL)
		{
			auxillary->next = auxillary->next->next;
			free(auxillary->next->prev);
			auxillary->next->prev = auxillary;
			return (1);
		}
		else if (i == index - 1 && auxillary->next == NULL)
		{
			free(auxillary->next);
			auxillary->next = NULL;
			return (1);
		}
		auxillary = auxillary->next;
		i++;
	}
	if (index > i)
		return (-1);
	return (-1);
}
