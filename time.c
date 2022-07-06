#include<stdio.h>
void main()
{
struct time
{
int day,hrs,min,sec;
}t1,t2,t3,d;
printf("TIME 1 : \n");
printf("Enter Hours :");
scanf("%d",&t1.hrs);
printf("Enter Minutes :");
scanf("%d",&t1.min);
printf("Enter seconds :");
scanf("%d",&t1.sec);
printf("TIME 2 : \n");
printf("Enter Hours :");
scanf("%d",&t2.hrs);
printf("Enter Minutes :");
scanf("%d",&t2.min);
printf("Enter seconds :");
scanf("%d",&t2.sec);
printf("TIME 1 :%d HOURS  ",t1.hrs);
printf("%d MINUTES  %d SECONDS\n",t1.min,t1.sec);
printf("TIME 2 :%d HOURS  ",t2.hrs);
printf("%d MINUTES  %d SECONDS\n",t2.min,t2.sec);
t3.hrs=t1.hrs+t2.hrs;
t3.min=t1.min+t2.min;
t3.sec=t1.sec+t2.sec;
while(t3.sec>=60)
{
t3.min=t3.min+1;
t3.sec=t3.sec-60;
}
while(t3.min>=60)
{
t3.hrs=t3.hrs+1;
t3.min=t3.min-60;
}
d.day=0;
while(t3.hrs>=24)
{
d.day=d.day+1;
t3.hrs=t3.hrs-24;
}
printf("TOTAL TIME TAKEN :%d DAYS %d HOURS %d MINUTES %d SECONDS\n",d.day,t3.hrs,t3.min,t3.sec);
}
