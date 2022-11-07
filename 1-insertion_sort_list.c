#include "sort.h"

/**
 * swap_listint_left - swaps a list
 * @list: the list to swap
 * @node: node to swap
 * Return: Address of the swaped list
 */

listint_t **swap_listint_left(listint_t **list, listint_t *node)
{
	listint_t *tmp, *node_left;

	if (!list || !*list || !node)
		return (NULL);

	if (node->prev == *list)
		*list = node;
	tmp = node->next;
	node_left = node->prev;
	if (node->prev->prev)
		node->prev->prev->next = node;
	if (node->next)
		node->next->prev = node->prev;
	node->next = node->prev;
	node->prev = node->prev->prev;
	node_left->prev = node;
	node_left->next = tmp;
	print_list(*list);
	return (list);
}

/**
 * insertion_sort_list - inserts an array
 * @list: the linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (!list || !*list || !(*list)->next)
		return;
	a = *list;

	while (a)
	{
		b = a;
		while (b && b->prev && b->n < b->prev->n)
			swap_listint_left(list, b);
		a = a->next;
	}

}
