#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char b[200];
    scanf("%s",&b);
    for(i=0;b[i]!='\0';i++)
    {
        if(i%2==0)
        {
            printf("c",b[i]);
        }
    }
    printf("\t");
    for(i=0;b[i]!='\0';i++)
    {
        if(i%2!=0)
        {
            printf("%c",b[i]);
        }
    }
}
