#include<stdio.h>
void main()
{
char b[100];
int i,c=0;
scanf("%s",&b);
for(i=0;b[i]!='\0';i++)
{
if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
{
c++;
}
}
if(c!=0)
printf("YES");
else
printf("NO");
}

