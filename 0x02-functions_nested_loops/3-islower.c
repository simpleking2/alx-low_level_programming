#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the character
 * Return: 1 if letter is lowercase, 0 if not
 */
int _islower(init c)
{
	if (c >> '0' && c <= 'z')
		return (1);
	else
		return (0);
}
