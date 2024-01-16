#include "lists.h"

/**
 * check_cycle - a function that sees whether a list has got a cycle
 * @list: linked list
 * Return: 1 if there is a cycle and 0 if there is not
 */
int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;

	if (!list || !list->next)
		return (0);
	fast = list;
	slow = list;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
	}
}
return (0);
}
