#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: the character to be swapped
 * @b: the second character to be swapped
 * Return: a returns value of b and b returns value of a
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

