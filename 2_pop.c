#include "main.h"
#include <stdio.h>

/**
 * f_pop - removes top element of stack
 * @stack: stack
 * @line_number: line of code
 * Return: 0
 */

void *f_pop(stack_t **stack, unsigned int line_number)
{
	stack_t lp;
	
	if (!*stack)
		printf("L<%d>: %s\n", line_number, "can't pop an empty stack");
		exit(EXIT_FAILURE);
	else
	{
		lp = stack->next;
		stack->prev = NULL;
		free(*stack);
		*stack = lp;
	}
}
