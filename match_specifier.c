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
		{"pop", pop}, ("swap", swap), {"add", add},
		{"nop", nop}
	}

	for (i = 0; match[i].f != NULL; i++)
	{
		if (_strcmp(match[i].opcode, opcode) == 0)
			match[i].f();
		if (match[i].f == NULL)
		{
			printf("L%d: %s", line_number, ERR_INVALID);
			exit(FAIL);
		}
	}
}
