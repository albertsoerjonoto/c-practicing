#include<stdio.h>
int main(void){
    int factorial=1,n,count;
    printf("Input the count: ");scanf("%d",&count);
    for (n=count;n>=1;n--)
    {
        factorial=factorial*n;
    }
    printf("The factorial of %d! is %d\n",count,factorial);
    return 0;
}
