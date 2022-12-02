#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the address of the head of listint_t list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *rear;

	if (head == NULL || *head == NULL)
		return (NULL);

	rear = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = rear;
		rear = *head;
		*head = front;
	}

	(*head)->next = rear;

	return (*head);
}

