#include <stdio.h>

 /**
  * swap-int - Swaps the values of two integers.
  * @a: The first integer to be swapped.
  * @b: The second integer to bo swapped.
  *
  * Return: nothing
  */
void swap_int(int *a, int *b)
/* the function that swaps the values of two ontegers. */
{
int temp = *a;
*a = *b;
*b = temp;
}
