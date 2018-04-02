#include <stdio.h>
#include <math.h>

float sinc(float x);

int main(void)
{
     float x_new, x_step, a, b;
     printf("Enter endpoints a and b (a < b); eg -5 5:\n");
     scanf("%f %f",&a,&b);

     x_step=(b-a)/20;

     x_new=a;
     printf("\n\n   x        sinc(x)\n\n");
     for (int n=0;n<=20;n++)
     {
         printf("%10f %10f \n",x_new,sinc(x_new));
         x_new=x_new+x_step;
     }
     return 0;
}

float sinc(float x)
{
    if (fabs(x)<0.000000001)
        return 1.0;
    else
        return sin(x)/x;
}
