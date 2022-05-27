#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to delete the head node of a linked list
 * @head: head of the linked list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
