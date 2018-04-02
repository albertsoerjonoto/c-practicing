/* FE 1008
   Section: A11
   Homework 2*/

#include <stdio.h>
/* Name             : Albert Soerjonoto
   Matriculation ID : U1620111C
   Group            : A11 */

int main(void)
{
    /*DECLARATION*/
    int age[5];
    float height[5],maxheight=0,avgage,totalage=0;
    printf("=============== AGE & HEIGHT PROGRAM =================\n\n");
    printf("For the following enter the ages (in years)\n");
    printf("and heights (in meters) of the five people\n\n");
    /*INPUT*/
    for (int n=0;n<=4;n++)
    {
        printf("PERSON-%d\n",n+1);
        printf("- Input the person-%d's age    : ",n+1);scanf("%d",&age[n]);
        totalage=totalage+age[n];
        printf("- Input the person-%d's height : ",n+1);scanf("%f",&height[n]);
        printf("\n");
    }
    /*PROCESSING*/
    avgage=totalage/5.00;
    for (int n=0;n<=4;n++)
    {
        if (maxheight<height[n])
        maxheight=height[n];
    }
    /*OUTPUT*/
    printf("===================== RESULTS =======================\n\n");
    printf("The average age of the five people = %.3f",avgage);printf(" years old\n");
    printf("The height of the tallest person   = %.2f",maxheight);printf(" m\n\n");
    return 0;
}
