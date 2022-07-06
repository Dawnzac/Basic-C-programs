#include<stdio.h>
void main()
{
	int i,j,sales[10][10],n,ds=0,to=0;
	printf("Enter the number of sales girls :");
	scanf("%d",&n);
	printf("Enter no. of days worked :");
	scanf("%d",&ds);
	for(i=0;i<n;i++)
		{
		printf("day :- %d \n",i+1);
		for(j=0;j<ds;j++)
		{
			printf("sales done by salesgirl %d in day %d :",j+1,i 	+1);
			scanf("%d",&sales[i][j]);
		}
		}
	for(i=0;i<n;i++)
		{
		for(j=0;j<ds;j++)
		{
			printf("sales done by salesgirl %d in day %d :- %d \n",i+1,j+1,sales[i][j]);
		}
		}
	for(i=0;i<n;i++)
		{
		for(j=0;j<ds;j++)
		{
			to=to+sales[i][j];
		}
		printf("total sales of day %d :- %d \n",i+1,to);
		to=0;
		}
}
		
