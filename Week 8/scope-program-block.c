/* Program scope vs block scope */
#include <stdio.h>

int x = 1234; /* program scope */
double y = 1.234567; /* program scope */

void function_1(void);

int main(void)
{
    int x = 4321; /* block scope 1*/
    function_1(); //1234 1.234567
    printf("Within the main block:\n x=%d, y=%f\n",x,y);//4321 1.234567

    /* a nested block */
    {
        double y = 7.654321; /* block scope 2 */
        function_1(); //1234 1.234567
        printf("Within the nested block:\n x=%d, y=%f\n", x, y); //4321 7.654321
    }
    return 0;
}

void function_1(void)
{
    printf("From function_1:\n x=%d, y=%f\n", x, y);
}
