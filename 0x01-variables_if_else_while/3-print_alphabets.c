#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Start
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 51; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
