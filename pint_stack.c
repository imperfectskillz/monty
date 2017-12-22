#include "monty.h"

/**
 *pint_stack - prints value at top
 *@stack: double pointer head
 *@line_number: line numb
 *Return: none
 */

void pint_stack(stack_t **stack, unsigned int line_number)
{
/*
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
*/	printf("%d\n", (*stack)->n);
}

