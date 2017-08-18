#include "monty.h"
#include <string.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: int
 **/
int main(int argc, char *argv[])
{

	ssize_t read;
	size_t len = 0;
	FILE *filename;
	unsigned int line_number = 0;
	char *tokens, *line = NULL;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		printf("%s", ERR_ARG);
		exit(EXIT_FAILURE);
	}

	filename = fopen(argv[1], "r");
	if (filename == NULL)
	{
		printf("%s", ERR_OPEN);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, filename)) != -1)
	{
		line_number++;
		tokens = strtok(line, DELIM);
		if (tokens == NULL)
			continue;
		if (strcmp(tokens, "push") == 0)
		{
			push(&stack, line_number);
		}
		else
			match_op(tokens, &stack, line_number);
	}
	free(line);
	free(stack);
	fclose(filename);
	return (EXIT_SUCCESS);
}
