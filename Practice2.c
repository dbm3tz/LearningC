/* 
  https://www.cprogramming.com/tutorial/c/lesson2.html
  Lesson 2: If statements in C
  
  relational operators:
  >, <, >=, <=, ==, !=

  boolean operators:
  ! NOT
  && AND
  || OR
  
  Values:
  TRUE, FALSE
*/

#include <stdio.h>
int main()
{
  if (5 < 10) {
    printf("5 is less than 10\n");
  }
  else if (TRUE) {
    printf("This would be executed\n");
  }
  else {
    printf("Last chance\n");
  }
  return 0;
}