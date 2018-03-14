#include<stdio.h>
void main()
{
int d,b,c,i,x=0;
scanf("%d",&d);
scanf("%d%d",&b,&c);
for(i=b;i<=c;i++)
{
if(d==i)
x++;
}
if(x!=0)
printf("YES");
else
printf("NO");
}
