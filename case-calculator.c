#include <stdio.h>
#include <string.h>

int main (void){
    float num1,num2,result;
    char operate;
    printf("Enter two numbers and an operator in the form\n number1 operator number2 (e.g. 4.5 - 2.9)\n");
    scanf("%f %c %f",&num1,&operate,&num2);
    switch(operate)
    {
    case '+' : result=num1+num2;
             break;
    case '-' : result=num1+-num2;
             break;
    case '*' : result=num1*num2;
             break;
    case '/' : result=num1/num2;
             break;
    default:printf("You entered an unknown operator.\n");
    }
    printf("%.1f %c %.1f",num1,operate,num2);
    printf(" is %.1f",result);
    return 0;
}
