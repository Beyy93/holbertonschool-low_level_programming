#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string
 * Return: Reversed string
 */

void rev_string(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

}
