#include <stdio.h>
#include "main.h"

/**
 * main - prints resylt of multiply
 * @argv: int
 * @argc: list
 * Return: Always 0 (Success)
*/
int main(int argc, char const *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(agrv[1]) * atoi (agrv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return(1);
	}
	return (0);
}
