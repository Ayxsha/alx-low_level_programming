#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @a: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b;
	}

	return (a);
}

/**
 * *_calloc - allocates memory for an array
 * @numb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int numb, unsigned int size)
{
	char *ptr;

	if (numb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * numb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, numb * size);

	return (ptr);
}
