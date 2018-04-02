#include <stdio.h>
int a = 10;
int b = 12;
int d = 14;
int ftn2(int a);
int ftn(int b);

int main(void) {
 int x = ftn(b);
 printf("%d\n", x);
}

int ftn(int b) {
 b = a;
 printf("%d\n", b);
 return ftn2(a);
}

int ftn2(int a) {
 int c = 13;
 printf("%d\n", a+b);
 return ++a;
}
