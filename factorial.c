#include<stdio.h>
int fact(int);
int main()
{
  int a,f;
  scanf("%d",&a);
  f=fact(a);
  printf("\nFactorial of %d is: %d",a,f);
  return 0;
}
