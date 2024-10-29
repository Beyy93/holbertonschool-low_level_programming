#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the pointer of char type
 * Return: returns i
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
