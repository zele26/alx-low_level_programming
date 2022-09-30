#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 *                           listint_t linked list
 * @head: pointer to the first node in the list
 * @index:  is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextNode, *temp;
	unsigned int nodeCount;

	temp = *head;
	nodeCount = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && nodeCount < index - 1)
	{
		temp = temp->next;
		nodeCount++;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	nextNode = temp->next->next;
	free(temp->next);
	temp->next = nextNode;

	return (1);
}
