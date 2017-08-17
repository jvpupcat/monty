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
<<<<<<< HEAD
		{"push", push}, {"pall", pall},
=======
		{"push", push}, {"pall", pall}, {"pint", pint},
>>>>>>> c38741386dff15b59632b8c937ef23299d92f5ee
		{NULL, NULL}
	};


	for (i = 0; match[i].opcode != NULL; i++)
	{
<<<<<<< HEAD
		if (_strcmp(match[i].opcode, opcode) == 0)
			return (match[i].f)(stack, line_number);
=======
		if (_strcmp(opcode, match[i].opcode) == 0)
		{
			(match[i].f)(stack, line_number);
			return (0);
		}
>>>>>>> c38741386dff15b59632b8c937ef23299d92f5ee
		if (match[i].f == NULL)
		{
			printf("L%d: %s", line_number, ERR_INVALID);
			exit(EXIT_FAILURE);
		}
	}
	printf("L%d: unknown instructions %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
