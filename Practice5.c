/*
 * https://www.cprogramming.com/tutorial/c/lesson5.html
 * Lesson 4: switch case in C
*/

#include <stdio.h>

int main()
{
  int input;
  printf("input: ");
  scanf("%d", &input);
  switch(input) {
    case 1:
      printf("Entered 1\n");
      break;
    case 2:
      printf("Entered 2\n");
      break;
    default:
      printf("Did not enter 1 or 2\n");
      break;
  }
  getchar();
}
