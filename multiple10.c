#include<stdio.h>
void main()
{
int a,i;
printf("enter the numbers");
scanf("%d",&a);
for(i=a;(a%10)!=0;i++)
{
    a++;
}
printf("%d",a);
}
