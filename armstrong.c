#include<stdio.h>
int main()
{
int a,b,c=0,x;
printf("enter the numbers");
scanf("%d",&a);
x=a;
for(i=0;a>10;i++);
{
b=a%10;
a=a/10;
c=c+pow(b,3);
}
c=c+pow(a,3);
if(x==c)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
