#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int i;
	double d;
	char c;


	printf("Size of a char: %i bytes(s)\n", sizeof(char));
	printf("Size of an int: %i bytes(s)\n", sizeof(int));
	printf("Size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %i bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %i bytes(s)\n", sizeof(float));

	return (0);
}
