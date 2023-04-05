#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the certain index.
 * @head: pointer to the haed of the listint_t list.
 * @index: index of the node.
 *
 * Return: pointer to the node
 * or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp ? temp : NULL);
}
