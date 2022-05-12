#include "main.h"
#include <stdio.h>

/**
 * f_pint - prints value at top of stack
 * @stack: stack
 * @line_number: line of code
 * Return: 0
 */

void *f_pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
		printf("L<%d>: %s\n", line_number, "can't print, stack empty");
		exit(EXIT_FAILURE);
	printf("%d\n", (*stack)->n);
}
