#include "main.h"

/**
 * _isalpha - checks if a character is lowercase or uppercase or not.
 * @c: the character to be checked.
 *
 * Return: 1 if lowercase or uppercase and 0 if other
 */

int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
