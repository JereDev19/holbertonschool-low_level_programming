#include "main.h"

/**
 * _calloc - Allocates memory for an array.
 *
 * @nmemb: Elements of the array.
 * @size: Size of elements.
 * Return: pointer.
 *
 * Author: Jeremias Erba
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *space; 
	unsigned int iterator;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = (int *)malloc(sizeof(size) * nmemb);

	if (space == NULL)
		return (NULL);

	for (iterator = 0; iterator < nmemb; iterator++)
	{
		space[iterator] = 0;
	}
	return (space);
	free(space);
}
