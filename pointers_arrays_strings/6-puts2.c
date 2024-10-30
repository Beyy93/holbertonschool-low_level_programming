#include "main.h"
/**
 * puts2 - checks if a character is uppercase or no
 * @str: the string
 * Return: every other character
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == '\0')
			break;
		else
		{
			_putchar(str[i]);
			i++;
			i++;
		}
	}
	_putchar('\n');
}
