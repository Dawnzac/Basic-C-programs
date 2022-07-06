#include<stdio.h>
void main()
{
int mark[100],n,l,i,j,s;
printf("Enter N :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&mark[i]);
}
s=mark[0];
l=mark[0];
for(j=0;j<n;j++)
{
if(mark[j]<s)
{
s=mark[j];
}
if(mark[j]>l)
{
l=mark[j];
}
}
printf("The smallest number is %d \n",s);
printf("The largest number is %d \n",l);
}
