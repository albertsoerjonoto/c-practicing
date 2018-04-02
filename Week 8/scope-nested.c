/* Scopes in nested block */
#include <stdio.h>
int main(void)
{
    int i = 32; /* block scope 1*/
    printf("Within the outer block: i=%d\n", i); //32
    { /* the beginning of the inner block */
        int i, j; /* block scope 2, int i hides the outer int i*/
        printf("Within the inner block:\n");
        for (i=0, j=10; i<=10; i++, j--)
        printf("i=%2d, j=%2d\n", i, j); //0 10 1 9 2 8 3 7 4 6 5 5 6 4 7 3 8 2 9 1 10 0
    } /* the end of the inner block */
    printf("Within the outer block: i=%d\n", i); //32
    return 0;
}
