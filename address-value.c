#include <stdio.h>
int main (void)
{
    int i=20,j=0,*k=&i;
    printf("Value of i=%10d and address of i is %u\n",i,&i);
    printf("Value of j=%10d and address of j is %u\n",j, &j);
    printf("Value in k=%10u and address of k is %u\n\n",k,&k);
    *k=10;
    j=*k;
    k=&j;
    printf("Value of i=%10d and address of i is %u\n",i,&i);
    printf("Value of j=%10d and address of j is %u\n",j, &j);
    printf("Value in k=%10u and address of k is %u\n",k,&k);
    return 0;
}
