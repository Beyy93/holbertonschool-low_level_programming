#include "main.h"

/**
 * _islower - checks if a character is lowercase or no
 * @c: the character to be checked.
 *
 * Return: 1 if lowercase and 0 if other
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
