#include "main.h"

/**
 * print_diagonal - checks if a character is uppercase or no
 * @n: the nomber of character of our diagonal
 * Return: returns a diagonal
 */

void print_diagonal(int n)
{
	int a;
	int b;

	a = 0;
	b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
