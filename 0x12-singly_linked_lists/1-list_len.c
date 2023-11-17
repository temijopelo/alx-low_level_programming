#include "lists.h"

/**
 * list_len - Afunction that gets the number of nodes of linked lists
 * @h: head of linked list
 * Return: number of nodes as size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
