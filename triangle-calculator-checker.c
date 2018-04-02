#include<stdio.h>
#include<math.h>

int istriangle (double a, double b, double c);
double areatri (double a, double b, double c);

int main(void)
{
    double a,b,c;
    printf("Enter the 1st side   : ");scanf("%lf",&a);
    printf("Enter the 2nd side   : ");scanf("%lf",&b);
    printf("Enter the 3rd side   : ");scanf("%lf",&c);
    printf("Area of the triangle : %lf",areatri(a,b,c));
    return 0;
}

int istriangle (double a, double b, double c)
{
    int check;
    if ((a+b>c)&&(b+c>a)&&(a+c>b))
        check=1;
    else
        check=0;
    if ((a<=0)||(b<=0)||(c<=0))
        check=0;
    return check;
}

double areatri (double a, double b, double c)
{
    double area,s;
    s=(a+b+c)/2.0;
    if (istriangle(a,b,c))
        area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
