#include "monty.h"
#include <stdio.h>

/**
 * p_error - print_error
 * message - message to print
 * line_n - line number
 */
void p_error(char *message, int line_n)
{
	fprintf(stderr, "L<%d>: %s\n", line_n, message);
	exit(EXIT_FAILURE);
}
