#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list.
 * @head: Pointer to the head of the list.
 * @number: Value to insert into the list.
 *
 * Return: Address of the new node, or NULL if it fails.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node, *current, *prev;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL); /* Return NULL if memory allocation fails */

	/* Set values for the new node */
	new_node->n = number;
	new_node->next = NULL;

	/* If the list is empty or the new node should be inserted at the beginning */
	if (*head == NULL || (*head)->n > number)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the appropriate position for the new node */
	prev = NULL;
	current = *head;
	while (current != NULL && current->n < number)
	{
		prev = current;
		current = current->next;
	}

	/* Insert the new node into the list */
	prev->next = new_node;
	new_node->next = current;

	return (new_node);
}

