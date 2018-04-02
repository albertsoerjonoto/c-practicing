#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define  P_CONST 3.14159
int main(void)
{
  float a,b,c,alpha;
  printf("Side A : ");scanf("%f",&a);
  printf("Side B : ");scanf("%f",&b);
  printf("Angle  : ");scanf("%f",&alpha);
  alpha=alpha*P_CONST/180;
  c=sqrt((a)*(a)+(b)*(b)-2*(a)*(b)*cos(alpha));
  printf("Side C : %.2f\n",c);
  return 0;
}
