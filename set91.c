#include<stdio.h>
int main()
{
	int l,b,h,vol,tsa;
	printf("\n enter the dimensions:");
	scanf("%d %d %d",&l,&b,&h);
	vol=l*b*h;
	tsa=2*((l*b)+(b*h)+(h*l));
	printf("\n total surface area=%d",tsa);
	printf("\n volume=%d",vol);
	 getch();
}
