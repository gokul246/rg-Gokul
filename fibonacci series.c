#include<stdio.h>
int main()
{
int a,b,c,n,i;
scanf("%d",&n);
a=1;
b=1;
printf("%d%d",a,b);
for(i=0;i<n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
getch();
}
