#include "monty.h"

/**
 * create_node: function that creates a node
 * @n: data
 * @stack: head pointer
 * @line_number: data
 * Return: create_node
 **/
void *create_node(int n)
{
	stack_t *create_node;

	create_node = malloc(sizeof(stack_t));
	if (create_node == NULL)
		return (NULL);
	create_node->n = n;
	create_node->prev = NULL;
	create_node->next = NULL;
	return(create_node);
}

/**
 * push - function that pushes an element to the stack
 * @stack: stack
 * @line_number: data
 * Return: none
 **/
void *push(stack_t **stack, unsigned int line_number)
{
	stack_t *push_node, *temp = *stack;

	push_node = create_node(line_number);
	if (push_node == NULL)
		return (NULL);
	if (*stack == NULL)
	{
		*stack = push_node;
		return (push_node);
	}
	temp->prev = push_node;
	push_node->next = temp;
	*stack = push_node;
	return (push_node);
}

/**
 *
 *
 *
 **/
void *pall(stack_t **stack, unsigned int line_number)
{

}

/**
 *
 *
 *
 **/
void *pop(stack_t **stack, unsigned int line_number)
{

}
