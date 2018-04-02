/* Program int_char.c for fe1008 hands-on       */
/* Name:                                      */
/* Group:                                     */
/* Date:                                      */

#include <stdio.h>
#include <ctype.h>
int main(void)
{
  char c;

  printf("Enter your character :");
  scanf("%c",&c);
  if (isupper(c))
      printf("Your character is in upper case.\n");
  else
      printf("Your character is in lower case.\n");
  return 0;
}

