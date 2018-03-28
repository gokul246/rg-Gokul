#include <stdio.h>
int main() 
{
	int b,a,d,i,sum=0;
	printf("enter the first term\n");
	scanf("%d",&a);
	printf("enter the difference\n");
	scanf("%d",&d);
	printf("enter the no of terms\n");
	scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        sum=sum+(a+i*d);
    }
    printf("%d",sum);
	return 0;
}
