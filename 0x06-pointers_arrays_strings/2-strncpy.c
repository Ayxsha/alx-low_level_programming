#include "main.h"
/**
  * _strncpy - copy a string
  * @dest: input value
  * @src: input value
  * @n: input values
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
