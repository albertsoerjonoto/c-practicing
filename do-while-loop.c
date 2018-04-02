#include <stdio.h>
#include <ctype.h> //in order to use toupper
#include <math.h>
int main(void)
{
    char do_again;
    do_again = 'Y';
    do
    {
            double a, b, c, root1, root2;
            printf("Input the coefficient a => ");
            scanf("%lf", &a);
            printf("Input the coefficient b => ");
            scanf("%lf", &b);
            printf("Input the coefficient c => ");
            scanf("%lf", &c);

            if (a == 0)
            {
                printf("You have entered a = 0.\n");
                printf("Only one root: %8.3f", -c/b);
            }
            else
            {
                root1 = (- b + sqrt(b*b-4*a*c))/(2*a);
                root2 = (- b - sqrt(b*b-4*a*c))/(2*a);
                printf("The first root is %8.3f\n", root1);
                printf("The second root is %8.3f\n", root2);
            }
        printf("Solve again (y/n)? ");
        fflush(stdin);
        do_again = toupper(getchar());
        if (do_again!='Y'&&do_again!='y'&&do_again!='N'&&do_again!='n')
            {
                printf("Sorry! That's not the proper input.");
            }
        printf("\n");
    }while (do_again == 'Y'||do_again == 'y');
}
