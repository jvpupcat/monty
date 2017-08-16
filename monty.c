#include "monty.h"

/**
 *
 *
 *
 **/
int main(int argc, char *argv[])
{
	FILE *filename;
        unsigned int line_number;
	char *tokens;
	
	if (argc <= 1)
	{
		fprintf(stdout,"%s", ERR_ARG)
		exit (FAIL)
	}
	filename = fopen(argv[1], "r")
	
	if (filename == NULL)
		fprintf(stdout,"%s", ERR_OPEN)
		exit(FAIL)

	while (read = getline(&line, &len, filename) != -1)
	{
		line_number++;
		tokens = strtok(line, DELIM);
		for (i = 0; tokens != NULL; i++)
		{
			store_tokens[i] = tokens;
			tokens = strtok(NULL, DELIM);
		}
		store_tokens[i] = NULL;
		match_op(store_tokens[1]);




		/**if (malloc fails || malloc can no longer malloc)
		{
			fprintf(stdout,"Error: malloc failed\n")
			free malloc
			exit (EXIT_FAILURE)
		}**/
	}
}
