#include<stdio.h>
#include<conio.h>
int main()
{
int b,i;
printf("\n Enter the number");
scanf("%d",&b);
for(i=1;b!=pow(2,i);i++)
{
b=b+1;
}
{
printf("%d",b);
}
return 0;
}
