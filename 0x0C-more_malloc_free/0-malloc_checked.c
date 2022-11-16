#include <stdlib.h>

/**
  * malloc_checked - Allocates memory
  * @b: number of bytes
  *
  * Return: Pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	char *tmp;

	tmp = malloc(b);

	if (tmp == NULL)
		exit(98);
	return (tmp);
}
