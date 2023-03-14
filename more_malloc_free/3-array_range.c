#include "main.h"

int *array_range(int min, int max)
{
	int *ptro, iterator;

	if (min > max)
		return (NULL);

	ptro = (int *)malloc(sizeof(int) * (max - (min - 1)));
	if (ptro == NULL)
		return (NULL);

	for (iterator = min; iterator <= max; iterator++)
		ptro[iterator] = iterator;

	return (ptro);
}
