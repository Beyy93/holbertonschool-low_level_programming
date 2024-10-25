#include "main.h"

/**
 * print_sign - checks if a character is positive, negative or equal to zero
 * @n: the character to be checked.
 *
 * Return: + if positive, - if negative and 0 if 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (n);
	}
	else
	{
		_putchar('-');
		return (n);
	}
}
