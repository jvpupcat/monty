#include "monty.h"

/**
 *
 *
 *
 **/
int main(argc, argv[])
{
	FILE *filename;

	filename = open("bytecodes", O_RDONLY)
	if (filename == NULL)
		exit(EXIT_FAILURE)
	if (cannot open file)
	{
		printf("Error: Can't open file %s\n", filename)
		exit (EXIT_FAILURE)
	}
	while (read = getline(&line, &len, filename) != -1)
	{
		if (file does not exist || argv > 1)
		{
			printf("USAGE: monty file\n")
			exit (EXIT_FAILURE)
		}
		if (file contains invalid instruction)
		{
			printf("L<line_number>: unknown instruction <opcode>\n")
			exit (EXIT_FAILURE)
		}
		if (malloc fails || malloc can no longer malloc)
		{
			printf("Error: malloc failed\n")
			free malloc
			exit (EXIT_FAILURE)
		}
	}
}
