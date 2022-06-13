#include "main.h"

/**
 * _puts - this prints a string
 * then followed by a new line
 * @str: a string
 * Return: none.
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
