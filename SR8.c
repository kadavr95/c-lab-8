#include <stdio.h>
#include <limits.h>
#define BASE 5

long int BASEto10(long int a);

int main(void) {
 long int x, y;
 printf("Ternary notation: (input only digits 0,1,2) a=");
 scanf("%ld", &x);
 y = BASEto10(x);
 printf("Decimal notation: a=%ld\n", LONG_MAX);
 fflush(stdin);
 getchar();
 return 0;
}
long int BASEto10(long int a) {
 int k=1;
 long int a10=0;
 while (a) {
  a10 += k*(a%10);
  k *= BASE;
  a /= 10;
 }
 return a10;
}
