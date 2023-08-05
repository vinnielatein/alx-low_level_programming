#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argv: int
 * @argc: list
 * Return: Always 0 (Success)
*/
int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc --)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
