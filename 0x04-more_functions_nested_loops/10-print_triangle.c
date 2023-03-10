#include "main.h"

/**
 * print_triangle - This function print a diagonal.
 * @size: # number de  to print
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void print_triangle(int size)
{
	int times, spaces, numerals;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (times = 0; times < size; times++)
	{
		for (spaces = size - 1; spaces > times; spaces--)
		{
			_putchar(' ');
		}
		for (numerals = 0; numerals <= times; numerals++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
