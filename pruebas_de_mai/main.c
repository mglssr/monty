#include "monty.h"

int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	size_t buffersize = 0;
	char *buffer = NULL, *token, **opi;
	char *delim = " \t";
	int i;
	
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}
	FILE* input_ = fopen(filename, "r");
	
	if (input_ == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	opi = malloc(2 * sizeof(char *));
	if(!opi)
	{
		fprintf(stderr, "Error: malloc failedi\n");
		exit (EXIT_FAILURE);
	}
	while (getline(&buffer, &buffersize, input_) != -1)
	{
		//** create a funtion to tokenize, check that the second token (int(?)) is an int, eg: 4a, with atoi 
		token = strtok(buffer, "\n");
		token = strtok(buffer, delim);
		i = 0;
		while (token != NULL)
		{
			opi[i] = token;

			if (opi == NULL)
			{
				free(opi);
				free(token);
				free(buffer);
			}
			token = strtok(NULL, delim);
			i++;
		}
		op_func = matching_func(opi[0]);
	
		free(opi);
		free(toke);
		free(buffer);
	}
	return (0);
}
