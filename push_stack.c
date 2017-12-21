#include "monty.h"

/**
 *push_stack- push number to stack
 *@stack: double pt stack
 *@line_number: line numb in file
 */

void push_stack(stack_t **stack, unsigned int line_number)
{
/*	char *tokenized = strtok(NULL, "\n\t ");*/
/*	int i = 0;
 */	int n;
/*	if (tokenized == NULL)
	{
		exit(EXIT_FAILURE);
		} */
/*	printf("%d\n", atoi(tokenized));
 */	/*	if (second_token == NULL)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
*/	
	if (!check_digits(second_token))
	{
		printf("fail %d\n", line_number);
		exit(EXIT_FAILURE);
	}
/*	while (*second_token)
	{
		if (!isdigit(*second_token))
		{
			printf("L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		second_token++;
	}
*/	n = atoi(second_token);

	push_extended(stack, n);

}
