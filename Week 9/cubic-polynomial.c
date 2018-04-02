#include <stdio.h>
double funct(double x);
double a, b, c, d, p, q, n,step;

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

    printf("Enter the first endpoint  : ");
    scanf("%lf",&p);
    printf("Enter the second endpoint : ");
    scanf("%lf",&q);
    printf("Enter the step            : ");
    scanf("%lf",&step);

    n=(q-p)/step;
    for (int k=0;k<=n-1;k++)
    {
        double psub, qsub;
        psub=p+k*step;
        if (k==n-1)
            qsub=p;
        else
            qsub=p+(k+1)*step;
        if (fabs(funct(qsub)*funct(psub))<0.001)
            printf("Root detected at %3f",psub);
    }
}

double funct(double x)
{

    return (a*x*x*x) + (b*x*x) +(c*x) + d;
}
