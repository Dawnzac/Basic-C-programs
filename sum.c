#include<stdio.h>
int sum(int x,int y)
{
int r;
r=x+y;
return(r);
}
void main()
{
int a,b,c;
printf("Enter A :");
scanf("%d",&a);
printf("Enter B :");
scanf("%d",&b);
c=sum(a,b);
printf("The sum of A and B is %d \n",c);
}

