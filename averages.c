#include <stdio.h>
int main()
{
	int b[10],i,n,sum=0;
    int avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum+=b[i];
	}
    avg=sum/n;
	printf("%d",avg);
	return 0;
}
