#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 * Return: returns a square
 */

void print_square(int size)
{
        int a;
        int b;

        a = 0;
        b = 0;

        if (size > 0)
        {
                while (a < size)
                {
                        while (b <size)
                        {
                                _putchar('#');
                                b++;
                        }
                        a++;
                        b = 0;
                        _putchar('\n');
                }
        }
        else
                _putchar('\n');
}
