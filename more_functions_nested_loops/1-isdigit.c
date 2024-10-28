#include "main.h"
/**
 * _isdigit - checks if a character is a digit or no
 * @c: the character to be checked.
 *
 * Return: 1 if c is a digit and 0 if other
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
