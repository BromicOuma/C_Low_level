#include <stdio.h>

/**
 * print the characters with their correspondind ascii numbers
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%c has an ASCII Value of %d\n", i, i);
	}
	printf("\n\n");

	for (i = 'A'; i <= 'Z'; i++)
	{
		printf("%c has an ASCII Value of %d\n", i, i);
	}

	return (0);

}

