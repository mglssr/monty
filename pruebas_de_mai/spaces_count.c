#include "monty.h"

/**
* spaces_count - function that counts spaces in a given string
* @buffer: string
* Return: number of spaces
*/

int spaces_count(char *buffer)
{
	size_t count = 0;
	int i = 0;

	while (buffer[i] != '\0')
	{
		if (buffer[i] == 32)
		{
			if (buffer[i + 1] == 32)
			{
				i++;
				continue;
			}
			else
			{
				count++;
				i++;
			}
		}
		else
			i++;
	}
	count += 2;
	return (count);
}

/**
* matching_func - function that selects the correct function to apply for the opcode
* @opcode: argument that we are look for his function  
* Return: a pointer to the function hat corresponds (or not) to the opcode
*/

void (matching_func(const char *opcode))(stack_t **stack, unsigned int line_number);
{
	int i = 0;

	instructions_t selector[] = {
		{'push', f_push},
		{'pall', f_pall},
		{'pint', f_pint},
		{'pop', f_pop},
		{'swap', f_swap},
		{'add', f_add},
		{'nop', f_nop},
		{'sub', f_sub},
		{'div', f_div},
		{'mul', f_mul},
		{'mod', f_mod},
		{NULL, NULL}
	};

	while (selector[i].opcode != NULL)
	{
		if(selector[i].opcode == *opcode)
			break;
		i++;
	}

	return(selector[i].f);
}
