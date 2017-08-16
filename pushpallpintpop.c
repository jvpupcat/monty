#include "monty.h"

/**
 * push - function that pushes an element to the stack
 * @stack: stack
 * @line_number: data
 * Return: none
 **/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL;
	char *n = NULL;
	(void) line_number;
	if (n == NULL)
	{
		fprintf(stdout, "%s", ERR_INT);
	}


	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stdout, "%s", ERR_MALLOC);
	}

	new_node->n = atoi(n);
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*stack != NULL)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}

/**
 * pall - prints out linked list
 * @stack: arg
 * @line_number: arg
 * Rerturn: void
 **/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	(void) line_number;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
/**
 *
 *
 *
 **/
