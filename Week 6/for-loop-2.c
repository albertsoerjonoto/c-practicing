#include<stdio.h>
int main(void)
{
    int h,w,x,y,z;
    printf("The value of the height is    :");scanf("%d",&h);
    printf("The value of the width is    :");scanf("%d",&w);

    for (y=1;y<=w;y++)
    {
        printf("=");
        for (x=1;x<=(h-2);x++)
        {
            printf("\n*");
            for (y=1;y<=(w-2);y++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}
