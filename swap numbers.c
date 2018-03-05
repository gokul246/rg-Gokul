#include<stdio.h>
int main()
{
int a,b,x;
printf("enter the number");
scanf("%d%d",&a,&b);
x=a;
a=b;
b=x;
printf("%d%d",a,b);
getch();
}
