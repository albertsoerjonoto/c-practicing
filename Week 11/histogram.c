#include<stdio.h>

int main()
{
    int n[10] = { 18, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    printf(" Element    Value              Histogram\n");
    for (int i=0;i<10;i++)
    {
        printf(" %4d  %9d",i,n[i]);
        int space=n[i]/2;
        for (int j=0;j<=(18-space);j++)
        {
            printf(" ");
        }
        for (int h=0;h<n[i];h++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
