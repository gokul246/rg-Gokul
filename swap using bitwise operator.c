#include<stdio.h>
int main()
{
int a,b,x;
printf("enter the number");
scanf("%d%d",&a,&b);
a=a^b;
b=b^a;
a=b^a;
printf("%d%d",a,b);
getch();
}
