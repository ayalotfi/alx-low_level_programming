include "main.h"
/**
 * print_sign - it prints the sign of a number
 * depends on the value of n 
 *
 * @n: character in ascii code 
 *
 * Return:return 1 if n > 0 & 0 if n = 0 & -1 if
 * < 0 
 */

int print_sign(int n )
{
if (n > 0) 
{
_putchar(43);
return(1);
}
else (n < 0)
{
-putchar(45);
return(-1);
}
else
{
_putchar(48);
return(0);
}
_putchar('\n');
}
