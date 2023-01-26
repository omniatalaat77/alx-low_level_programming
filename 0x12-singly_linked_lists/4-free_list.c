#include "lists.h"

/**
 * free_list - destroy list
 * @head: list header
 */
void free_list(list_t *head)
{
	list_t *acc = NULL;

	while (head)
	{
		acc = head;
		head = head->next;
		free(acc->str);
		free(acc);
	}
}
