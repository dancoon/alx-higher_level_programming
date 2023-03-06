#include "lists.h"
/**
 * check_cycle - checks for cycle
 * @list: list
 * Return: 1 if cycle is present else 0
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	slow = list;
	fast  = list;

	if (list == NULL || list->next == NULL)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = list->next;
		fast = list->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
