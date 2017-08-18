#include "monty.h"

/**
 * match_op - function that searches for appropriate function
 * @opcode: the opcode that searches for function
 * @stack: head pointer
 * @line_number: data
 * Return: none
 **/
int match_op(char *opcode, stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t match[] = {
		{"push", push}, {"pall", pall}, {"pint", pint},
		{"pop", pop}, {"swap", swap}, {"nop", nop}, {"add", _add},
		{NULL, NULL}
	};

	for (i = 0; match[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, match[i].opcode) == 0)
		{
			(match[i].f)(stack, line_number);
			return (0);
		}
		if (match[i].f == NULL)
		{
			printf("L%d: %s", line_number, ERR_INVALID);
			exit(EXIT_FAILURE);
		}
	}
	printf("L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
