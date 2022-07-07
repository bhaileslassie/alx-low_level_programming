#include <stdlib.h>
#include "main.h"

/**
 *_abs - Check _abs(int)
 * @r: An integre input
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}

