#include "main.h"
/**
 * print_numbers - Function that prints numbers from 0 to 9 followed by newline
 * @void: ...
 *
 * Return: return 0
 */

void print_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
