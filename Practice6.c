/*
 * www.cprogramming.com/tutorial/c/lesson6.html
 * Lesson 6: Pointers in C
 *
 * & gets address of variable
 * * dereferences a pointer
*/

#include <stdio.h>
#include <stdlib.h>

void run1();
void run2();

int main()
{
  run1();
  run2();
}

void run1()
{
  printf("x: ");
  int x;
  scanf("%d", &x);
  int * y = &x;
  printf("old x: %d\n", *y);
  scanf("%d", y);
  printf("new x: %d\n", x);
}

void run2()
{
  int * ptr = malloc(sizeof(*ptr));
  *ptr = 4;
  printf("ptr: %d\n", *ptr);
  free(ptr);
}
