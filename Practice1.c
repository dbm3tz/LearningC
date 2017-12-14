/*
  https://www.cprogramming.com/tutorial/c/lesson1.html
  Lesson 1: Introduction to C

  Add comments with this syntax
  #include is a directive
*/

/* Preprocessor directive that inserts code */
#include <stdio.h>
int main()
{
  printf("Hello World\n");

  /* some primitive types */
  int b;
  short c;
  long d;
  float f;
  double g;
  char h;

  int number;
  /* Print to console */
  printf("Please enter a number: ");

  /* Read in integer */
  scanf("%d", &number);

  /* Print integer */
  printf("You entered %d\n", number);

  /* Waits for user to hit enter before reading character */
  getchar();

  /* 0 means success */
  return 0;
}
