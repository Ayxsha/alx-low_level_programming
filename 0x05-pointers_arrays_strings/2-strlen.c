#include "main.h"
/**
  * _strlen - returns the length of the string
  * @a: string
  * Return: length
  */

int _strlen(char *a)
{
	int longi = 0;

	while (*a != '\0')
	{
		longi++;
		a++;
	}

	return (longi);
}
