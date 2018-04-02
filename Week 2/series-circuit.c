#include <stdio.h>
#include <math.h>
int main(void)
{
    double r1, r2, r3, v, I;
    printf("Input the resistance in resistor 1 => ");
    scanf("%lf", &r1);
    printf("Input the resistance in resistor 2 => ");
    scanf("%lf", &r2);
    printf("Input the resistance in resistor 3 => ");
    scanf("%lf", &r3);
    printf("Input the voltage => ");
    scanf("%lf", &v);
    I=v/(r1+r2+r3);
    printf("The current in the series circuit is %8.3f\n", I);
return 0;
}
