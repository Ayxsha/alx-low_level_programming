#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @a: input one to concat
 * @b: input two to concat
 * Return: concat of a and b
 */
char *str_concat(char *a, char *b)
{
	char *conct;
	int i, ci;

	if (a == NULL)
		a = "";
	if (b == NULL)
		b = "";

	i = ci = 0;
	while (a[i] != '\0')
		i++;
	while (b[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (a[i] != '\0')
	{
		conct[i] = a[i];
		i++;
	}

	while (b[ci] != '\0')
	{
		conct[i] = b[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
