#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c += 1;
}
putchar('\n');
}
