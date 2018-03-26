#include<stdio.h>
#include<string.h>
int main()
{
char b[100];
gets(b);
int n,i;
n=strlen(b);
for(i=0;i<n;i++)
{
if(b[i]==' ')
{
b[i+1]-=32;
}
}
b[0]-=32;
printf("%s",b);
return 0;
}
