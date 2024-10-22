#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	i = 'a';

	while (i <= 'z')
	{
		putchar(i - 32);
		i++;
	}
	putchar('\n');
	return (0);
}
