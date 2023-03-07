#include "lists.h"
#include <stdlib.h>
/**
 * insert_node - insert a number
 * @head: head
 * @number: number
 * Return: NULL on fail
 */
listint_t *insert_node(listint_t **head, const int number)
{
	listint_t *current, *prev;
	listint_t *node = (listint_t *) malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	node->n = number;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		current = *head;
		prev = NULL;
		while (current)
		{
			if ((current->n == number) || (current->n > number && prev->n <= number))
			{
				prev->next = node;
				node->next = current;
			}
			prev = current;
			current = current->next;
		}
	}
	return (node);
}
