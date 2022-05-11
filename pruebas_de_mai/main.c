#include "monty.h"

int main(int argc __attribute__((unused)), char *argv[])
{
	const char *filename = argv[1];
	size_t buffersize = 0;
	char *buffer = NULL, *token;
	char **opi = malloc(2 * sizeof(char *));
	char *delim = " \t";
	int i;
	
	FILE* input_ = fopen(filename, "r");
	while (getline(&buffer, &buffersize, input_) != -1)
	{
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
