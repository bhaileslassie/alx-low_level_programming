#include "main.h"
/**
 * _puts -  the stdio version of puts
 * @str: the value to process
 */
void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

