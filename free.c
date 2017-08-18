#include "monty.h"

/**
**free_list - free the list
**@head: head of the nodes or start of them
**Return: void
**
**/
void free_list(stack_t **stack)
{
	stack_t *tmp;

	while (*stack != NULL)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}
