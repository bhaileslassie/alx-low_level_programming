#include "main.h"
/**
  * _strlen - return the lenth of the string 
  * @s: the string to be measured.
  *
  * Return: Int value of the lenth.
  */
int _strlen(char *s)
{
	int count = 0;
	while (*(s + count) != '\0')
	{
	count++;
	}
	return (count);
}
