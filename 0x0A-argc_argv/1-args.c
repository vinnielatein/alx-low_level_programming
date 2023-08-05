#include <stdio.h>

/**
 * main - prints a number of arguments
 * @argv: pointer to array of command line arguments
 * @argc: number of command line arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char  *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
