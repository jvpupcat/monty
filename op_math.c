#include "monty.h"
/**
**_add - sum of two nodes
**@stack: arg
**@line_number: arg
**Return: sum of two nodes
**/
void _add(stack_t **stack, unsigned int line_number)
{

	if (list_len(stack) < 2)
	{
		printf("L%d: %s", line_number, ERR_ADD);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
**_sub - sum of two nodes
**@stack: arg
**@line_number: arg
**Return: sum of two nodes
**/
void _sub(stack_t **stack, unsigned int line_number)
{
	if (list_len(stack) < 2)
	{
		printf("L%d: %s", line_number, ERR_SUB);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n -= (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

