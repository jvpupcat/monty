#include "monty.h"
/**
**_add - sum of two nodes
**@stack: arg
**@line_number: arg
**Return: sum of two nodes
**/
void _add(stack_t **stack, unsigned int line_number)
{

	if (link_len(stack) < 2)
	{
		printf("L%d: %s", line_numbers, ERR_ADD);
		exit("%s", FAIL)
	}
	while (*stack != NULL)
	{
		(*stack)->next->n += *stack->n;
		*stack = *stack->next;
	}
	free(*stack);
	(*stack)->prev = NULL;
}
