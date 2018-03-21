#include <stdio.h>
int main()
{
    int n,b[10],i,p,sum=0;
    scanf("%d %d",&n,&p);
    for(i=0;i<n;i++)
    {
    scanf("%d",&b[i]);
    }
    printf("%d",b[p-1]);
    return 0;
}
