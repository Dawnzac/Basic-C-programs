#include<stdio.h>
int fact(int x)
{
int d=0;
while (x>1)
{
d=d*x;
x=x-1;
}
printf("%d",d);
}
void main()
{
int a,c;
printf("Enter A :");
scanf("%d",&a);
c=fact(a);
}
