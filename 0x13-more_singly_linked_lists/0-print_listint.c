#include "lists.h"

/**
 * print_listint - prints all the elements of linked list
 * @h: linked list
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h);
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

