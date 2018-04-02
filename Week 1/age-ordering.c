/* FE 1008
   Section: A11
   Homework 1*/

#include <stdio.h>
/* Name             : Albert Soerjonoto
   Matriculation ID : U1620111C
   Group            : A11 */

int main(void)
{
    /*DECLARATION*/
    printf("=============== AGE ORDERING PROGRAM =================\n\n");
    printf("For the following enter the ages (in years)\n");
    printf("of the three people\n\n");
    int age1, age2, age3, old, middle, young;
    /*INPUT*/
    printf("Enter the first age: ");
    scanf("%d", &age1);
    printf("Enter the second age: ");
    scanf("%d", &age2);
    printf("Enter the third age: ");
    scanf("%d", &age3);
    /*PROCESSING*/
    if(age1<=age2&&age1<=age3)
	{
        young=age1;
        if (age2<=age3){
            middle=age2;
            old=age3;}
        else{
            middle=age3;
            old=age2;}
    }
    else if (age2<=age1&&age2<=age3)
   	{
        young=age2;
        if (age1<=age3){
            middle=age1;
            old=age3;}
        else{
            middle=age3;
            old=age1;}
    }
    else if (age3<=age2&&age3<=age1)
    {
        young=age3;
        if (age2<=age1){
            middle=age2;
            old=age1;}
        else{
            middle=age1;
            old=age2;}
    }
    /*OUTPUT*/
    printf("\nThe ages in decreasing order are: %d, %d, %d\n", old, middle, young);
    printf("======================================================\n\n");
    return 0;
}
