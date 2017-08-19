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
