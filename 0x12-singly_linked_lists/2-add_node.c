#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at the start of list_t list
 * @head: pointer to the head of list_t list
 * @str: string to be added to list_t list
 * Return: if function fails - NULL
 * Otherwise - address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
