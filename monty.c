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
	/**if (argc != 2)
	{
		perror("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	if (filename == NULL)
	{
		perror("Error: Can't open file");
		exit(EXIT_FAILURE);
	}**/
	filename = fopen(argv[1], "r");
	while ((read = getline(&line, &len, filename)) != -1)
	{
		line_number++;
		/**printf("Read: %ld\n", read);
		printf("Line: %s\n", line);
		printf("Len: %ld\n", len);
		continue;**/
		tokens = strtok(line, DELIM);
		if (strncmp(tokens, "push", strlen("push")) == 0)
		{
			num_stack = strtok(NULL, DELIM);
			printf("num_stack: %s\n", num_stack);
			push(&stack, line_number, num_stack);
			printf("num_stack2: %s\n", num_stack);
		}
		else
			match_op(tokens, &stack, line_number);
	}
	printf("I'm here\n");
	return (EXIT_SUCCESS);


		/**if (malloc fails || malloc can no longer malloc)
		{
			fprintf(stdout,"Error: malloc failed\n")
			free malloc
			exit (EXIT_FAILURE)
		}**/

}
