#include<stdio.h>
int main()
{
int a,b,c,i;
printf("enter the number");
scanf("%d%d",&a,&b);
for(i=0;i<10;i++)
{
c=a+b;
}
if(c==0)
{
    printf("even number");
}
else
{
    printf("odd number");
}
getch();
}
