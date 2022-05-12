#include "main.h"
#include <stdio.h>

/**
 * f_add - adds the top two elements of the stack 
 * @stack: stack
 * @line_number: line of code
 * Return: 0
 */

void *f_add(stack_t **stack, unsigned int line_number)
{
	stack_t bp, lp;
	bp = *stack;
	
	if (bp)
		lp = bp->next;
	else
	{
		printf("L<%d>: %s\n", line_number, "can't add, stack too short");
		exit(EXIT_FAILURE);
	}
	if (!lp)
		printf("L<%d>: %s\n", line_number, "can't add, stack too short");
		exit(EXIT_FAILURE);
	else
	{
		lp->n += bp->n;
		lp->prev = NULL;
		free(bp);
		*stack = lp;
	}
}
