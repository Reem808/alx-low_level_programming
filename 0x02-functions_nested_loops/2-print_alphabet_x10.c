#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
int c = 'a';
 
while( i < 10 )
{
c = 'a';
while( c <= 'z')
{
putchar(c);
c += 1;
}
i += 1;
putchar('\n');
}
}
