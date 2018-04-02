#include <stdio.h>
int main(void)
{
    int number1, number2, number3, number4, smaller;
    printf("Enter the first integer: ");
    scanf("%d", &number1);
    printf("Enter the second integer: ");
    scanf("%d", &number2);
    printf("Enter the third integer: ");
    scanf("%d", &number3);
    printf("Enter the fourth integer: ");
    scanf("%d", &number4);

    if (number1<number2)
        smaller=number1;
    else
        smaller=number2;

    if (number3<smaller)
        smaller=number3;

    if (number4<smaller)
        smaller=number4;

    /* OR USING THIS PROGRAM
    if (number2 <= number1 && number2 <= number3 && number2 <= number4)
        smaller = number2;
    else if (number1 <= number2 && number1 <= number3 && number1 <= number4)
        smaller = number1;
    else if (number3 <= number2 && number3 <= number1 && number3 <= number4)
        smaller = number3;
    else if (number4 <= number2 && number4 <= number1 && number4 <= number3)
        smaller = number4;*/

    printf("%d is the smaller integer.", smaller);
    return 0;
}
