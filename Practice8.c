/*
 * www.cprogramming.com/tutorial/c/lesson8.html
 * Lesson 8: Arrays in C
*/

#include <stdio.h>

int main()
{
  char astring[10];
  int i;
  scanf("%s", astring);
  for (i = 0; i < 10; i++)
  {
    if (astring[i] == 'a')
    {
      printf("You entered an a\n");
    }
  }

  char * ptr;
  ptr = astring;

  printf("astring: %s\n", astring);
  printf("ptr: %s\n", ptr);
}
