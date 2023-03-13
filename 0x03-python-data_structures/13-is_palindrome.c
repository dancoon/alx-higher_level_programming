#include "lists.h"
#include <stdlib.h>
/**
 * is_palindrome - checks if a list is palindrome
 * @head: head of list
 * Return: 0 if not a palindrome and 1 if palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow, *fast, *prev, *next;

	if (head == NULL)
		return (0);

	slow = *head;
	fast = *head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	prev = slow;
	slow = slow->next;
	while (slow)
	{
		next = slow->next;
		slow->next = prev;
		prev = slow;
		slow = next;
	}

	fast = *head;
	while (slow)
	{
		if (fast->n != slow->n)
			return (0);
		fast = fast->next;
		slow = slow->next;
	}
	return (1);
}

