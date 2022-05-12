#include "monty.h"
#include <stdio.h>

/**
 * f_pop - removes top element of stack
 * @stack: stack
 * @line_number: line of code
 * Return: 0
 */

void f_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *lp;
	
	if (!*stack)
		p_error("can't pop an empty stack", line_number);
	else
	{
		lp = (*stack)->next;
		(*stack)->prev = NULL;
		free(*stack);
		*stack = lp;
	}
}
