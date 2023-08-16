#include "main.h"
/**
  * print_alphabet_x10: Print alphabets i 10 times
  *
  * Return: Always void
  */
void print_alphabet_x10(void)
{
	int a;

	int i;

	i = 0;
while (i < 10)
{
	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	i++;
}
}
