#include "main.h"
/**
 * puts2 - checks if a character is uppercase or no
 * @str: the string
 * Return: every other character
 */

void puts2(char *str)
{
	int i = 0;
	int a = 2;

	while (str[i])
	{
		if (a == 2)
		{
			_putchar(str[i]);
			a = 0;
		}
		else
		{
			a++;
			i++;
		}
	}
	_putchar('\n');
}
