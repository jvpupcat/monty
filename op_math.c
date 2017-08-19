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
/**
**_mul - sum of two nodes
**@stack: arg
**@line_number: arg
**Return: sum of two nodes
**/
void _mul(stack_t **stack, unsigned int line_number)
{
	if (list_len(stack) < 2)
	{
		printf("L%d: %s", line_number, ERR_MUL);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
**_div - div of two nodes
**@stack: arg
**@line_number: arg
**Return: sum of two nodes
**/
void _div(stack_t **stack, unsigned int line_number)
{
	if (list_len(stack) < 2)
	{
		printf("L%d: %s", line_number, ERR_DIV);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		printf("L%d: %s", line_number, ERR_ZERO);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n /= (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
**_mod - div of two nodes
**@stack: arg
**@line_number: arg
**Return: sum of two nodes
**/
void _mod(stack_t **stack, unsigned int line_number)
{
	if (list_len(stack) < 2)
	{
		printf("L%d: %s", line_number, ERR_MOD);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		printf("L%d: %s", line_number, ERR_ZERO);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n %= (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

