#include "main.h"
/**
 * leet - this function encodes a string into 1337
 * @s: a string
 * Return: the pointer to dest
 */
char *leet(char *s)
{
	int count = 0, i;
	int lw_letters[] = {97, 101, 111, 116, 108};
	int up_letters[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lw_letters[i] || *(s + coun) == up_letters[i])
			{
				*(s + count) = num[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
