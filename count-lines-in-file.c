#include <stdio.h>
#define MAX_WORD 80

int main()
{
    FILE *txtfptr=fopen("input.txt","r");
    int lines=1;
    char ch;
    for (ch=getc(txtfptr);ch!=EOF;ch=getc(txtfptr))
    if (ch=='\n')
        ++lines;
    printf("The number of lines in the file: %d\n\n",lines);
    return 0;
}
