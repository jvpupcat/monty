#include "monty.h"

/**
 * push - function that pushes an element to the stack
 * @stack: stack
 * @line_number: data
 * Return: none
 **/
void push(stack_t **stack, unsigned int line_number)
{
	int i;
	char *num_stack;
	stack_t *new_node = NULL;
	(void) line_number;

	num_stack = strtok(NULL, DELIM);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("%s", ERR_MALLOC);
		exit(EXIT_FAILURE);
	}

	for (i = 0; num_stack[i]; i++)
	{
		if (num_stack[i] == '-' && i == 0)
			continue;
		if (isdigit(num_stack[i]) == 0)
		{
			printf("L%d: %s", line_number, ERR_MALLOC);
			exit(EXIT_FAILURE);
		}

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
		printf("L%d: %s", line_number, ERR_PINT);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * pop - function that removes from top of the stack
 * @stack: head pointer
 * @line_number: number line
 * Return: none
 **/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *next;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: %s", line_number, ERR_POP);
		exit(EXIT_FAILURE);
	}
	next = (*stack)->next;
	free(*stack);
	*stack = next;
}
