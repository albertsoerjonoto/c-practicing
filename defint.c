#include <stdio.h>
#define N 1000
double funct(double x);
double a, b, c, d, p, q;

int main(void)
{
    double x,sum=0,delta;
    printf("Enter the first coefficient a : ");
    scanf("%lf",&a);
    printf("Enter the first coefficient b : ");
    scanf("%lf",&b);
    printf("Enter the first coefficient c : ");
    scanf("%lf",&c);
    printf("Enter the first coefficient d : ");
    scanf("%lf",&d);

    printf("Enter the first boundary limit : ");
    scanf("%lf",&p);
    printf("Enter the second boundary limit : ");
    scanf("%lf",&q);
    delta=(q-p)/N;
    for (int i=0;i<=N;i++)
    {
        x=p+i*delta;
        sum=sum+funct(x)*delta;
    }
    printf("%lf",sum);
}

double funct(double x)
{

    return (a*x*x*x) + (b*x*x) +(c*x) + d;
}
