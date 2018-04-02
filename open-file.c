#include <stdio.h>

int main ()
{
    char letter;
    FILE *inf=fopen("in.txt","r");
    FILE *outf=fopen("out.txt","w");
    if (inf==NULL)
        printf("Could not open the file\n");
    while (fscanf(inf,"%c",&letter)!=EOF)
    {
        fprintf(outf,"%c",letter);
    }
    fclose(inf);
    fclose(outf);
    return 0;
}
