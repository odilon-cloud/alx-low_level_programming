#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *nova;

	nova = malloc(sizeof(dlistint_t));
	if (nova == NULL)
		return (NULL);

	nova->n = n;
	nova->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = nova;
	}
	else
	{
		*head = nova;
	}

	nova->prev = h;

	return (nova);
}
