#include "main.h"
/**
  * reverse_array - reverse array of integers
  * @a: array
  * @n: numbers of elements in array
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}

