#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always void (Success)
 */

void print_alphabet(void)
{
		char i;

		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
}
