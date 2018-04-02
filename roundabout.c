#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
  float x;
  printf("Enter your number   = ");
  scanf("%f",&x);
  /*if ((x-(int)x)>=0.5)
  printf("Enter your number   = %f\n",ceil(x));
  else
  printf("Enter your number   = %f\n",floor(x));*/
  printf("%f is rounded to %.1f\n",x,floor(x+0.5));
  return 0;
}
