#include "monty.h"
#include <stdio.h>

/**
 * f_pint - prints value at top of stack
 * @stack: stack
 * @line_number: line of code
 * Return: 0
 */

void f_pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
		p_error("can't print, stack empty", line_number);
	printf("%d\n", (*stack)->n);
}
