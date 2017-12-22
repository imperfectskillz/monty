#include "monty.h"

/**
 *pint_stack - prints value at top
 *@stack: double pointer head
 *@line_number: line numb
 *Return: none
 */

void pint_stack(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	printf("%d\n", (*stack)->n);
}
