/*
 * www.cprogramming.com/tutorial/c/lesson7.html
 * Lesson 7: Structures in C
 *
 *
*/

#include <stdio.h>

struct s {
  int x;
};

struct s generateStruct(int x);

int main()
{
  struct s s1 = generateStruct(1);
  struct s s2;
  struct s * s3;

  s3 = &s2;
  s2.x = 2;

  printf("s1.x: %d\n", s1.x);
  printf("s2.x: %d\n", s2.x);
  printf("s3->x: %d\n", s3->x);
}

struct s generateStruct(int x)
{
  struct s s1;
  s1.x = x;
  return s1;
}
