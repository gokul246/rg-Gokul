#include<stdio.h>
#include<conio.h>
int main()
{
int a,i;
printf("\n Enter the number");
scanf("%d",&a);
for(i=1;a!=pow(2,i);i++)
{
a=a+1;
}
{
printf("%d",a);
}
return 0;
}
