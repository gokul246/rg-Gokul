#include<stdio.h>
int main()
{
char b[10];
int flag = 0 , i;
printf("enter string \n");
scanf("%c", &b);
for(i=0 ; b[i]!='\0'; i++)
{
if(b[i]==b[i+1])
{
flag = 0;
break;
}}
if(flag == 1)
{
printf("\n yes");
}
else
{
printf("\n no");
}
return 0;
}
