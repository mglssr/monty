#include "monty.h"

/**
* main - montys main function
* @argc: argument count
* @argv: array of arguments
* Return:
*/

int main(int argc, char *argv[])
{
	unsigned int line_number = 1;
	size_t buffersize = 0;
	char *buffer = NULL, *filename = argv[1], *delim = "\t\n $";
	char *token;
	FILE *f_d;
	stack_t *stack = NULL;
	global_var *ar;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f_d = fopen(filename, "r");
	if (f_d == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit (EXIT_FAILURE);
	}

	ar = malloc(sizeof(global_var));
	if(!ar)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit (EXIT_FAILURE);
	}
	while (getline(&buffer, &buffersize, f_d) != -1)
	{ 
		token = strtok(buffer, delim);
		ar->argument = strtok(NULL, delim);

		if (token != NULL)
			stack = matching_func(&stack, token, line_number);
	
		line_number++;
	}
	fclose(f_d);
	exit(EXIT_SUCCESS);
}
