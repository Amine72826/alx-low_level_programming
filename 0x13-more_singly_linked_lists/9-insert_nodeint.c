#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a list.
 * @head: Address of the first node in a list.
 * @idx: Position to insert node in (starting from 0).
 * @n : the value to be stored in the new node.
 * Return: new node address or NULL
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);

	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i < idx - 1)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
