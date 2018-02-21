#include<stdio.h>          
int main()
{
    int b1,b2;
    scanf("%d %d",&b1,&b2);
    b1=b1^b2;                                
    b2=b1^b2;                                   
    b1=b1^b2;                                 
    printf("%d %d",b1,b2);
    return 0;
}
