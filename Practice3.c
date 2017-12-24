/*
  https://www.cprogramming.com/tutorial/c/lesson3.html
  Lesson 3: Loops
*/

#include <stdio.h>

int main()
{

  int x;
  for (x = 0; x < 4; x++) {
    if (x == 2) {
      break;	
    }
    printf("x: %d\n", x);
  }

  int y = 0;
  while (y < 4) {
    if (y == 2) {
      y++;
      continue;
    }
    printf("y: %d\n", y);
    y++;
  }

  int z = 0;
  do {
    printf("do-while executed once");
  } while(z != 0);

  getchar();
}
