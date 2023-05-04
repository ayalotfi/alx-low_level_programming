#include "main.h"

/**
 * get_bit =  the value of the bit at index index or -1 if an error occured
 *
 * @n:the  Input Number
 *
 * @index: Index of the bit
 *
 * Return:* Value Bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
