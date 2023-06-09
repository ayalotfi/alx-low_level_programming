#include "main.h"

/**
 * binary_to_uint -> Converts a binary number to unsigned int
 *
 * @b:they Input String Binary
 *
 * Return: the unsigned int form b
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, num = 0;

	if (b == 0)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (i = 0; i < len; i++)
	{
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}
