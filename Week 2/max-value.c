/************************************/
/* Program:  Simple.c               */
/* Hands-on 1                       */
/************************************/
#include <stdio.h>

int main(void)
{
  int x[3],angka,counter,max;
  counter=1;
  angka=0;
  /* PROSES INPUT*/
  while(counter<=3)
    {
        printf("Insert number-%d",counter," :");
        scanf("%d",&x[angka]);
        angka=angka+1;
        counter=counter+1;
    }
  /* PROSES MENCARI*/
  counter=1;
  angka=0;
  max=x[0];
  while(counter<=3)
    {
        x[angka]>max;
        max=x[angka];
        angka++;
        counter++;
    }
  /* PROSES OUTPUT*/
  printf("Your biggest number is:%d",max);
  return 0;
}
