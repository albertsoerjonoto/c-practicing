/* Example on the use of srand() */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Library for time()
int main(void)
{
    int i=1,max=100;
    srand((unsigned) time(NULL));
    printf("Rolling a dice %d times:\n\n", max);
    while (i<=max)
    {
        printf("%d",rand()%6+1);
        i++;
    }
    printf("\n");
 return 0;
}
