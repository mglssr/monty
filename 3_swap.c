#include "monty.h"
#include <stdio.h>

/**
 * f_swap - swaps top two elements of stack
 * @stack: stack
 * @line_number: line of code
 * Return: 0
 */

void f_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *bp, *lp, *pp;
	bp = *stack;
	
	if (bp)
		lp = bp->next;
	else
		p_error("can't swap, stack too short", line_number);
	if (lp)
		pp = lp->next;
	else
		p_error("can't swap, stack too short", line_number);
	if (pp)
		pp->prev = bp;
	*stack = lp;
	lp->prev = NULL;
	lp->next = bp;
	bp->prev = lp;
	bp->next = pp;
}
