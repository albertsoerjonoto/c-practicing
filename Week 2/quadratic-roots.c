/* Solution of a*x*x + b*x + c = 0 */
#include <stdio.h>
#include <math.h>
int main(void)
{
     double a, b, c, root1, root2;
     printf("Input the coefficient a => ");
     scanf("%lf", &a);
     printf("Input the coefficient b => ");
     scanf("%lf", &b);
     printf("Input the coefficient c => ");
     scanf("%lf", &c);
     if (a==0)
     {
         printf("You have entered a = 0.\n");
         printf("Only one root: %8.3f", -c/b);
    }
     else
     {
         if ((b*b-4*a*c)<0)
         {
             printf("There are no real roots for this equation");
         }
         else
         {
         root1 = (- b + sqrt(b*b-4*a*c))/(2*a);
         root2 = (- b - sqrt(b*b-4*a*c))/(2*a);
         printf("The first root is %8.3f\n", root1);
         printf("The second root is %8.3f\n", root2);
         }
     }
return 0;
}
