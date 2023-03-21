#include "main.h"
/**
 * _isalpha -showa 1 if the input is a
 * letter another cases , show 90
 *
 * @c: character in ascii code
 *
 * Retur:1 fot letter. 0 for the rest 
 */

int _isalpha(int c);
{
	if ((c >= 65 && c <= 90)  || (c >= 97 && <= 122))
	{

	return (1);
	}
return (0);
}
