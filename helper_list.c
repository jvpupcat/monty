#include "monty.h"

/**
 * create_node - function that inserts at head
 * @n: the variable that passes through function
 * Return: none
 **/
stack_t *create_node(int n)
{
	stack_t *create_node;

	create_node = malloc(sizeof(stack_t));
	if (create_node == NULL)
		return (NULL);
	create_node->n = n;
	create_node->prev = NULL;
	create_node->next = NULL;
	return (create_node);
}

/**
 * add_dnodeint - function that adds a node
 * @head: double pointer head
 * @n: variable that passes through function
 * Return: add_node
 **/
stack_t *add_dnodeint(stack_t **stack, const int n)
{
	stack_t *add_node, *temp = *head;

	add_node = create_node(n);
	if (add_node == NULL)
		return (NULL);

	if (*stack == NULL)
	{
		*stack = add_node;
		return (add_node);
	}
	temp->prev = add_node;
	add_node->next = temp;
	*stack = add_node;
	return (add_node);
}

/**
 * add_dnodeint_end - function that adds a node at the end
 * @head: pointer head
 * @n: integer
 * Return: end_node
 **/
stack_t *add_dnodeint_end(stack_t **stack, const int n)
{
	stack_t *end_node, *cursor = *head;

	end_node = create_node(n);
	if (end_node == NULL)
		return (NULL);

	if (*stack == NULL)
	{
		*stack = end_node;
		return (end_node);
	}
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = end_node;
	end_node->next = NULL;
	end_node->prev = cursor;
	cursor = end_node;
	return (end_node);
}
