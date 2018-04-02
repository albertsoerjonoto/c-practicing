#include<stdio.h>

int main()
{
    double w[10], x[10], sum=0, xave=0;
    FILE *inp=fopen("weights.txt","r");
    if (inp==NULL)
    {
        printf("Could not open the file\n");
        return 1;
    }
    int count=0;
    for (int k=0;k<10;k++)
    {
        if((fscanf(inp,"%lf",&w[k]))!=EOF)
        {
            count++;
            printf("Weight[%d] %.2lf\t",k+1,w[k]);
            printf("Enter mark[%d]\t",k+1);
            scanf("%lf",&x[k]);
            printf("\t\tMark[%d] %.2lf\n",k+1,x[k]);
            sum+=w[k];
            xave+=(w[k]*x[k]);
        }
    }
    if (fabs(sum-1.0)>0.00001)
    {
        printf("Error! Weights do not add to 1.0\n\n");
    }
    else
    {
        printf("Weighted Average is %.2lf\n",xave);
    }
    fclose(inp);
    return 0;
}
