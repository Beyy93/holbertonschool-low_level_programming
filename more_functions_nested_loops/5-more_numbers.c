#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14 ten times.
 * Return: 1 if uppercase and 0 if other.
 */

void more_numbers(void)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (b <= 9)
	{
		while (a <= 14)
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
		b++;
		a = 0;
	}
}
