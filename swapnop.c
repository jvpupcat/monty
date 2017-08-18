#include "monty.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @stack: head pointer
 * Return: returns number of elements upon success
 **/
size_t list_len(stack_t **stack)
{
	stack_t *temp;
	unsigned int num_nodes_count;

	temp = *stack;

	for (num_nodes_count = 0; temp != NULL; num_nodes_count++)
	{
		temp = temp->next;
	}
	return (num_nodes_count);
}

/**
 * swap - function that swaps the top 2 elements of the stack
 * @stack: head pointer
 * @line_number: void
 * Return: void
 **/
void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;
	(void) line_number;

	if (list_len(stack) < 2)
	{
		printf("L%d: %s", line_number, ERR_SWAP);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}

/**
 * nop - function that does nothing
 * @stack: head pointer
 * @line_number: number of line
 * Return: none
 **/
void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
