#include<stdio.h>
int main(void){
    int factorial=1,n,y,count;
    float inverse,sum=1;
    printf("Input the count: ");scanf("%d",&count);
    for (n=1;n<=count;n++)
    {
        for (y=n;y>=1;y--)
        {
            factorial=factorial*y;
            printf("The factorial of %d! is %d\n",y,factorial);
        }
        inverse=1.0/factorial;
        sum=sum+inverse;
    }
//    printf("The factorial of %d! is %d\n",count,factorial);
    printf("The partial sum of n=%d is %f\n",count,sum);
    return 0;
}
