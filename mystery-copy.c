#include <stdio.h>

void mystrcpy(char s[], char t[]);

int main()
{
    char s[]="Text", t[]="Name";
    mystrcpy(s[],t[]);
}

void mystrcpy(char s[], char t[])
{
    int i = 0;
    while ((s[i] = t[i]) != ‘\0’)
    i++;
}
