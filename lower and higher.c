#include<stdio.h>
int main()
{
int n,i,b[10],high,low;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
high=b[0];
low=b[0];
for(i=0;i<n;i++)
{
if(b[i]>high)
high=b[i];
if(b[i]<low)
low=a[i];
}
printf("%d\n",high);
printf("%d\n",low);
return 0;
}
