#include <stdio.h>
/**
 * main - entry point
 * return: 0 (success)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int; %lu byte(s)\n", sizeof(int));
	printf("Size of long int; %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size if a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
