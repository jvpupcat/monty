#include "monty.h"

/**
 * push - function that pushes an element to the stack
 * @stack: stack
 * @line_number: data
 * @num_stack: numbers in the stack
 * Return: none
 **/
void push(stack_t **stack, unsigned int line_number)
{
	char *num_stack;
	stack_t *new_node = NULL;
	(void) line_number;

	num_stack = strtok(NULL, DELIM);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		perror("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(num_stack);
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

	if (stack == NULL || *stack == NULL)
		return;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
/**
 * pint - prints value top of stack
 * @stack: arg
 * @line_number: arg
 * Rerturn: void
 **/
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || stack == NULL)
	{
		printf("L%d: can't pint, stack empty", line_number);
		exit (EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
