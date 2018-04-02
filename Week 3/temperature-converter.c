#include <stdio.h>
int main(void)
{
    float celsius, fahren;
    printf("Enter the heat in celcius degree = ");
    scanf("%f",&celsius);
    fahren=celsius*9/5+32;
    /* or  fahren=celsius*((float)9/5)+32;*/
    /* not fahren=celsius*(9/5)+32;*/
    /*                      ^this equals to 1*/
    printf("The celcius degree is = %f\n",celsius);
    printf("The fahrenheit degree is = %f\n",fahren);
    return 0;
}
