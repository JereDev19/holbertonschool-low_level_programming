#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (If is Success)
 *
 * Author: Jeremias Erba
 */

int main(void)
{
	int numberz;

	for (numberz = 0; numberz < 10; numberz++)
	{
		putchar(numberz + '0');
	}
	putchar('\n');
	return (0);
}

