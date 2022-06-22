#include "main.h"

/**
 * set_string - this sets the value of a pointer to a char
 * @s: source address
 * @to: target address
 * Return: none.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
