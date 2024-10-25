#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_10x - Make alphabet x10 times
 *
 * Return : void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		if (i != 9)
		{
			_putchar('\n');
		}
	}
}
