#include <stdio.h>
#define MAX_WORD 80

int main()
{
    FILE *fp;
    int words[MAX_WORD], len=0;
    int c;
        for (int i=0;i<MAX_WORD;i++)
        {
            words[i]=0;
        }
        fp=fopen("input.txt","r");
        if ((fp==NULL))
        {
            printf("Can not open the file\n");
            return 1;
        }
        while ( (c=getc(fp))!=EOF )
        {
            switch (c)
            {
                case '\n':
                case ' ' :
                case '\t':  words[len]++;
                            len=0;
                            break;
                default  :  len++;
            }
        }
        printf("Words length:\n");
        for (int i=1;i<MAX_WORD;i++)
        {
            if (words[i]>0)
            {
                printf("%d :",i);
                for (;words[i]>0;words[i]--)
                    printf("*");
                printf("\n");
            }
        }
        return 0;
}
