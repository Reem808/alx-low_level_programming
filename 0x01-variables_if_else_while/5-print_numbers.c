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
  int i = 0;

  while (i < 10)
  {
    printf("%d", i);
    i += 1;
  }
  printf("\n");
  return (0);
}
