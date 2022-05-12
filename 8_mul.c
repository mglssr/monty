#include "monty.h"
#include <stdio.h>

/**
 * f_mul - adds the top two elements of the stack 
 * @stack: stack
 * @line_number: line of code
 * Return: 0
 */

void f_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *bp, *lp;
	bp = *stack;
	
	if (bp)
		lp = bp->next;
	else
		p_error("can't add, stack too short", line_number);
	if (!lp)
		p_error("can't add, stack too short", line_number);
	else
	{
		lp->n *= bp->n;
		lp->prev = NULL;
		free(bp);
		*stack = lp;
	}
}
