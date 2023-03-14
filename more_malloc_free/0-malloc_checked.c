#include "main.h"

void *malloc_checked(unsigned int b)
{
	unsigned int *memory = NULL;
	memory = (int *)malloc(sizeof(int) * b);
	if (memory == NULL)
		
}
