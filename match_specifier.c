#include "monty.h"

/**
 *
 *
 *
 **/
void match_op(char *opcode)
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
			perror("Could not find matching opcode");
			exit(EXIT_FAILURE);
		}
	}
}
