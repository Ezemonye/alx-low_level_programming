#include "lists.h"
/**
 * free_listint - Entry Point
 * @head: head
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *killnode;

	while (head != NULL)
	{
		killnode = head;
		head = head->next;
		free(killnode);
	}
}
