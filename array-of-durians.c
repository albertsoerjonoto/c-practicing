/*
Albert Soerjonoto
A11
17
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int ndurian,durian[100],ngroup=0,sumgroup=0;
    float avggroup;

    printf("Input the number of durians: ");scanf("%d",&ndurian);
    for(int i=0;i<=ndurian-1;i++)
    {
        printf("Enter the diameter of durian %d: ",i+1);
        scanf("%d",&durian[i]);
        while (durian[i]<=0)
        {
            printf("Enter the diameter of durian %d: ",i+1);
            scanf("%d",&durian[i]);
        }
    }

    for(int i=0;i<=ndurian-1;i++)
    {
        if (170<=durian[i]&&180>=durian[i])
        {
            ngroup=ngroup+1;
            sumgroup=sumgroup+durian[i];
        }
    }

    printf("Number of the durians in the group [170,180] is %d\n",ngroup);

    if (ngroup==0)
    {
        avggroup=0;
    }
    else
    {
        avggroup=1.0*sumgroup/ngroup;
    }
    printf("Required average diameter is %.1f\n",avggroup);

    return 0;
}
