#include <stdio.h>

int main()
{
    int p[3][3] = { {1, 3, -4 }, { 1, 1, -2}, { -1, -2, 5} };
    int q[3][3] = { { 8, 3, 0 }, { 3, 10, 2 }, { 0, 2, 6 } };
    int r[3][3];

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            r[i][j]=p[i][j]+q[i][j];
            printf ("r[%d][%d]:%2d     ",i,j,r[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
