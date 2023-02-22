#include "main.h"
#include <stdio.h>
/**
 *
 * print_alphabet_x10
 */
int print_last_digit(int n)
{
int l = n % 10;

if ( l < 0)
l *= -1;
_putchar(l + '0');
return (l);
}
