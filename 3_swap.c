#include "main.h"
#include <stdio.h>

/**
 * f_swap - swaps top two elements of stack
 * @stack: stack
 * @line_number: line of code
 * Return: 0
 */

void *f_swap(stack_t **stack, unsigned int line_number)
{
	stack_t bp, lp, pp;
	bp = *stack;
	
	if (bp)
		lp = bp->next;
	else
	{
		printf("L<%d>: %s\n", line_number, "can't swap, stack too short");
		exit(EXIT_FAILURE);
	}
	if (lp)
		pp = lp->next;
	else
	{
		printf("L<%d>: %s\n", line_number, "can't swap, stack too short");
		exit(EXIT_FAILURE);
	}
	if (pp)
		pp->prev = bp;
	*stack = lp;
	lp->prev = NULL;
	lp->next = bp;
	bp->prev = lp;
	bp->next = pp;
}
