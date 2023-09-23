#include "sort.h"

/**
 * insertion_sort_list  - A function to sort a list
 * @list: The list to be sorted
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *n, *p;

	if (*list == NULL || (*list)->next == NULL || list == NULL)
		return;

	temp = (*list)->next;

	while (temp != NULL)
	{
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			n = temp->next;
			p = temp->prev;

			if (p->prev != NULL)
				p->prev->next = temp;
			else
				*list = temp;

			temp->prev = p->prev;
			temp->next = p;
			p->prev = temp;
			p->next = n;
			print_list(*list);

			if (n != NULL)
				n->prev = p;
		}
		temp = temp->next;
	}
}
