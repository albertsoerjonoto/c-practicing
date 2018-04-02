#include<stdio.h>

void print_array(int a[ ], int arraysize);
int max_array(const int a[ ], int arraysize);

int main()
{
    int a[]={1,2,0,0,4,5,6,9,9,17};
    int arraysize=10;
    print_array(a[arraysize],arraysize);
    printf("Maximum value of the array  :%d",max_array(a[arraysize], arraysize));
}

void print_array(int a[ ], int arraysize)
{
    for (int n=0;n<=10;n++)
    {
        printf("%d ",a[n]);
    }
}

int max_array(const int a[ ], int arraysize)
{
    int min = a[0];
    for (int n=1;n<=10;n++)
    {
        if (a[n]<min)
        {
            min=a[n];
        }
    }
}
