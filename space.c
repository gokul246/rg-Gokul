#include<stdio.h>
void main()
{
int a,d[100],b,j,i;
scanf("%d",&a);
for(i=0;a>10;i++)
{
b=a%10;
a=a/10;
d[i]=b;
}
d[i]=a;
for(j=i;j>=0;j--)
{
if(c[j]%2!=0)
printf("%d\t",c[j]);
}
}
