#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet()
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
