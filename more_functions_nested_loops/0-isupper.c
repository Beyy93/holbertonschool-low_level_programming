#include "main.h"
/**
 * _isupper - checks if a character is uppercase or no
 * @c: the character to be checked.
 *
 * Return: 1 if uppercase and 0 if other
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
