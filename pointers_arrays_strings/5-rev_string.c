#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string
 * Return: Reversed string
 */

void rev_string(char *s)
{
	char *debut;
	char *fin;
	char temp;

	debut = &s[0];
	fin = &s[0];
	temp = *debut;

	while (*fin != 0)
	{
		fin++;
	}
	fin--;
	while (fin > debut)
	{
		temp = *debut;
		*debut = *fin;
		*fin = temp;
		debut++;
		fin--;
	}
}
