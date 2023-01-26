#include "lists.h"
#include <string.h>

/**
 * add_node - Add node to the list
 * @head: head of list
 * @str: str to new
 * Return: pointer to added structure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		if (new->str)
		{
			while (new->str[len])
				len++;
			new->len = len;
			new->next = *head;
			*head = new;
			return (new);
		}
		free(new);
		return (NULL);
	}
	return (NULL);
}
