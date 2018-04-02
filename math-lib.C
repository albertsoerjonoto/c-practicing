#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
  float x;
  printf("Enter your number  = ");scanf("%f",&x);
  printf("Its absolute value = %f\n",abs(x));
  printf("Its sine function value = %f\n",sin(x));
  printf("Its cosine function value = %f\n",cos(x));
  printf("Its tangent function value = %f\n",tan(x));
  printf("Its exponential value = %f\n",exp(x));
  printf("Its logarithm value = %f\n",log(x));
  printf("Its square root value = %f\n",sqrt(x));
  printf("Its ceiling value = %f\n",ceil(x));
  printf("Its floor value = %f\n",floor(x));
  return 0;
}

