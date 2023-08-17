#include "main.h"
/**
  * _isalpha - checks for uppercase  and lowercase characters
  * @c: the character to be checked
  * Return: 1 for upper or lowercase characters or 0 for otherwise
  */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
	{
	return (1);
	}
	return (0);
}
