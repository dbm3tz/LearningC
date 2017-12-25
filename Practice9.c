/*
 * www.cprogramming.com/tutorial/c/lesson9.html
 * Lesson 9: C Strings
 *
 * C-style strings are arrays
 *
 * You cannot modify String literals (e.g. "Hello World")
 *
 * C-style strings are always terminated with a null character (i.e. 
 * '\0'. If you declare a string with 49 characters you must account
 * for the extra character (i.e. char word[50])
 *
 * char * myString can also be used as a string
 *
 * Can create a string with malloc (free memory with free)
 *
 * scanf() terminates string after it reaches the first space so use
 * fget()
 *
 * strcmp() - compares two strings
 * strcat() - appends the second string to the first string
 * strlen() - returns the length of the string (does not include the
 * terminating character)
 *
*/

#include <stdio.h>

int main()
{
  char ptr[10];
  scanf("%s", ptr);
  printf("%s", ptr);
}
