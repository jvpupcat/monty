#include "monty.h"

/**
 * pchar - function that prints a character of the ascii value
 * @stack: head pointer
 * @line_number: number line
 * Return: none
 **/
void pchar(stack_t **stack, unsigned int line_number)
{
	int node;
	(void) line_number;

	if (*stack == NULL || stack == NULL)
	{
		printf("L%d: %s", line_number, ERR_EMPPCHAR);
		exit(EXIT_FAILURE);
	}
	node = (*stack)->n;
	if (node >= 'a' && node <= 'z')
	{
		putchar(node);
		printf("\n");
	}
	else if (node >= 'A' && node <= 'Z')
	{
		putchar(node);
		printf("\n");
	}
	else
	{
		printf("L%d: %s", line_number, ERR_PCHAR);
		exit(EXIT_FAILURE);
	}
}

/**
 * pstr - function that prints a string
 * @stack: head pointer
 * @line_number: number line
 * Return: none
 **/
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	(void) line_number;

	if (stack == NULL || *stack == NULL)
	{
		printf("%s", ERR_PSTR);
		return;
	}
	while (node != NULL)
	{
		if ((node->n) < 0 || (node->n) >127)
			putchar('\n');
		putchar(node->n);
		node = node->next;
	}
	putchar('\n');
}
