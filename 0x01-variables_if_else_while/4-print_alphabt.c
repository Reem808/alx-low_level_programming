#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char c = 'a';

  while ( c <= 'z' )
    {
      if (c != 'e' && c != 'q')
	{
	  putchar(c);
	}
      c += 1;
    }
  putchar('\n');
  return (0);
}
