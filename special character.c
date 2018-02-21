#include<stdio.h>
#include<string.h>
int main()
{
char a[200];
int count=0,i;
printf("enter the string\n");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i] =='@'||a[i]=='!'||a[i]=='#'||a[i]=='$'||a[i]=='%'||a[i]=='^'||a[i]=='&'||a[i]=='*'||a[i]=='('||a[i]==')')
count++;    
}
printf("number of words in given string are: %d\n",count);
return 0;
}
