#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,b,var=0;
scanf("%d",&a);

  b=a/2;
for(i=2;i<=b;i++)
{
if(a%i==0)
{
var=1;
break;
}
}
if(var==0)
printf("\n no");
else
printf("\n yes");
getch();
}
