#include "_putchar.h"

/**
 * print_alphabet - prints letters in lowwercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
