#include "main.h"

/**
 * swap_int - reset int value
 * @a: point to be swaped
 * @b: point to be swapped
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}

