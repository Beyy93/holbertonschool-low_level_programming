#include "main.h"
/**
 * print_line - draw a straight line
 * @n: number of times underscore is printed
 * Description: Can only use _putchar to print
 */

void print_line(int n)
{
	int i;

	i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
