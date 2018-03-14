#include<stdio.h>
#include<string.h>
void main()
{
int i;
char b[100];
scanf("%s",&b);
i=strlen(b);
if(i%2==0)
{
b[i/2]='*';
b[(i/2)-1]='*';
}
else
{
b[i/2]='*';
}
printf("%s",b);
}
