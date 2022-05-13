#include "monty.h"

/**
* matching_func - function that selects the correct function to apply for the opcode
* @opcode: argument that we are look for his function  
* Return: a pointer to the function hat corresponds (or not) to the opcode
*/

stack_t *matching_func(stack_t **stack, char *_opcode, unsigned int line_number)
{
	int i = 0;

	instruction_t selector[] = {
		{"push", f_push},
		{"pall", f_pall},
		{"pint", f_pint},
		{"pop", f_pop},
		{"swap", f_swap},
		{"add", f_add},
		{"nop", f_nop},
		{"sub", f_sub},
		{"div", f_div},
		{"mul", f_mul},
		{"mod", f_mod},
		{NULL, NULL}
	};

	while (selector[i].opcode != NULL)
	{
		if (strcmp(selector[i].opcode, _opcode) == 0)
		{
			selector[i].f(&(*stack), line_number);
			break;
		}
		i++;
	}
	if (selector[i].opcode == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, _opcode);
			exit(EXIT_FAILURE);
		}
	return (*stack);
}
