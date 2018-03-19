#include<stdio.h>
void main()
{
int x,b,i,c=1;
scanf("%d%d",&x,&b);
for(i=2;(i<=x)&&(i<=b);i++)
{
if((x%i==0)||(b%i==0))
{
c=c*i;
}
}
printf("%d",c);
}
