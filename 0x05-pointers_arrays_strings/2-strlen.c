#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
