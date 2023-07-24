#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to the length of 
 * Return: length
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
