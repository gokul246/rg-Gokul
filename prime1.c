#include <stdio.h>
int main()
{
int c, b, i, j;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &c, &b);
printf("Prime numbers between %d and %d are: ", c, b);
while (c< b)
{
j = 0;
for(i = 2; i <= c/2; ++i)
{
if(c% i == 0)
{
j = 1;
break;
}
}
if (j == 0)
printf("%d ", c);
++c;
}
return 0;
}
