/*
 * https://www.cprogramming.com/tutorial/c/lesson4.html
 * Lesson 4: Functions in C
*/

#include <stdio.h>

/* Prototype */
int mult(int x, int y);

int main()
{
  int m = mult(4,3);
  printf("%d\n", m);
}

int mult(int x, int y)
{
  return x * y;
}
