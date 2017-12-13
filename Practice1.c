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
  int x;
  char letter;
  float f;

  int number;
  /* Print to console */
  printf("Please enter a number: ");

  /* Read in integer */
  scanf("%d", &number);

  /* Print integer */
  printf("You entered %d", number);

  /* Waits for user to hit enter before reading character */
  getchar();

  /* 0 means success */
  return 0;
}