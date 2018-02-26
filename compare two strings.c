#include<stdio.h>
#include<string.h>
int main()
{
	char c[100],d[100];
	int n,n1;
  clrscr();
	scanf("%s",c);
	scanf("%s",d);
	n=strlen(c);
	n1=strlen(d);
    if(n==n1)
    {
        printf("%s",d);
    }
    else if(n>n1)
    {
        printf("%s",c);
    }
    else
    {
        printf("%s",c);
    }
	 return 0;
}
