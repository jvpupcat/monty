#include "monty.h"
#include <string.h>

/**
 *
 *
 *
 **/
int main(int argc, char *argv[])
{

	ssize_t read;
	size_t len = 0;
	FILE *filename;
	unsigned int line_number = 0;
	char *tokens, *line = NULL, *num_stack;
	stack_t *stack = NULL;
	(void) argc;
	
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
		
		if (strcmp(tokens, "push") == 0)
		{
			num_stack = strtok(NULL, DELIM);
			push(&stack, line_number, num_stack);
		}
		else
			match_op(tokens, &stack, line_number);
	}
	return (EXIT_SUCCESS);


		/**if (malloc fails || malloc can no longer malloc)
		{
			fprintf(stdout,"Error: malloc failed\n")
			free malloc
			exit (EXIT_FAILURE)
		}**/

}
