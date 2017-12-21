#include "monty.h"

/**
 *check_digits - checks digits of string
 *@s: string
 *Return: 1 or 0
 */

int check_digits(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}
