#include<stdio.h>
void main()
{
int c1,c2,d1,d2,e1,e2,c,d,e;
scanf("%d%d%d%d%d%d",&c1,&c2,&d1,&d2,&e1,&e2);
c=c1-c2;
d=d1-d2;
e=e1-e2;
if(c<0)
c=c *-1;
if(d<0)
d=d *-1;
if(e<0)
e= e*-1;
printf("%d\n%d\n%d\n",c,d,e);
}
