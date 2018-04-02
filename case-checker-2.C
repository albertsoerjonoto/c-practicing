#include <stdlib.h>
#include <stdio.h>

int main (void){
    char ch;
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
        printf("'%c' is a lowercase letter.",ch);
    else
        printf("'%c' is not a lowercase letter.",ch);
    return 0;
}
