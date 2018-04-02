#include <stdio.h>

int main()
{
     int a[]={2, 3, 4, 10, 5},imax=0;
     int max=a[0], secondmax=a[0];
     for (int i=0;i<5;i++)
     {
         if (a[i]>max)
         {
             max=a[i];
             imax=i;
         }

     }
     for (int n=0;n<5;n++)
     {
        if (n!=imax)
        {
            for (int i=0;i<5;i++)
            {
                if (a[n]>=a[i])
                secondmax=a[n];
            }
        }
     }
     printf("%d %d",max,secondmax);
}
