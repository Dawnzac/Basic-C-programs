#include<stdio.h>
struct kseb
{
int consid,unit,total;
char name[20];
}bill[10];
void read(struct kseb[],int);
void main()
{
int n,i;
printf("Enter number of consumers :");
scanf("%d",&n);
read(bill,n);
printf("/////////////////////DETAILS//////////////////\n");
for(i=0;i<n;i++)
{
printf("CONSUMER %d\n",i+1); 
printf("CONSUMER NAME : %s\n",bill[i].name);
printf("CONSUMER ID : %d\n",bill[i].consid);
printf("UNITS CONSUMED %d\n",bill[i].unit);
printf("TOTAL CHARGE : %d\n",bill[i].total);
printf("\n");
}
}
void read(struct kseb temp[10],int num)
{
int i;
for(i=0;i<num;i++)
{
printf("CONSUMER %d\n",i+1); 
printf("Enter consumer ID :");
scanf("%d",&temp[i].consid);
printf("Enter name of the consumer :");
scanf("%s",&temp[i].name);
printf("Enter units of electricity used by the consumer :");
scanf("%d",&temp[i].unit);
temp[i].total=temp[i].unit*10;
}
}

