#include <stdio.h>
 
int main(void) {
	int a,t,r,interest=0;
	scanf("%d %d %d",&a,&t,&r);
	interest=(a*t*r)/100;
	printf("%d",interest);
	return 0;
}
