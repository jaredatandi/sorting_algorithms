#ifndef SORT_H
#define SORT_H value

#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **llist);
listint_t **swap_listint_left(listint_t **list, listint_t *node);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);

#endif /* ifndef SORT_H */
