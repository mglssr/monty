#include "main.h"
#include <stdio.h>

/**
 * f_push - pushes integer to the stack
 * @stack: stack
 * @line_number: line of code
 * Return: 0
 */

void *f_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_val;
	
	new_val = malloc(sizeof(stack_t));
	if (!new_stk)
	{	
		printf("L<%d>: %s\n", line_number, "usage: push integer");
		exit(EXIT_FAILURE);
	}
	new_val->next = *stack;
	new_val->prev = NULL;
	if (*stack)
		(*stack)->prev = new_val;
	*stack = new_val;
}

/**
 * f_pall - prints all values on the stack, starting from the top
 * @stack: stack
 * @line_number: line of code
 * Return: 0
 */

void *f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *lp;

	lp = *stack;
	for (lp = *stack; lp; lp = lp->next);
		printf("%d\n", lp->n);
}
