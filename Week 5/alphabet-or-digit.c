#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main (void){
    char ch;
    printf("Input a character  : ");
    scanf("%c",&ch);
    if (isalpha(ch))
    {
        if(isupper(ch))
        {
            ch=ch;
            printf("Your character in uppercase is '%c'\n\n",ch);
        }
        else
        {
            ch=ch-32;
            printf("Your character in uppercase is '%c'\n\n",ch);
        }
    }
    else if (isdigit(ch))
        printf("Sorry, your input is a digit.\n\n");
    else
        printf("Sorry, your input is not a character.\n\n");
    return 0;
}
