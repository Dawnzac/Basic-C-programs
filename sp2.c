#include<stdio.h>
void main()
{
	int mark[100],n,l,i,j,k=0,m=0,s,mm=0;
	float p;
	printf("Enter N :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&mark[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("mark of student %d is %d \n",i+1,mark[i]);
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
	printf("The smallest mark is %d \n",s);
	printf("The largest mark is %d \n",l);
	p=((float) (k)/n)*100;
	for(i=0;i<n;i++)
	{
		if(mark[i]>=50)
		{
			k+=1;
		}
		else if(mark[i]>=45 && mark[i]<50)
		{
			m+=1;
			mark[i]=50;
			mm=50-i;
		}
	}
	printf("Number of students passed : %d \n",k);

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
	printf("The smallest mark is %d \n",s);
	printf("The largest mark is %d \n",l);
	p=((float) (k)/n)*100;
	printf("Pass percentage is %f % \n",p);
	printf("students eligible for moderation %d \n",m);
	for(i=0;i<n;i++)
	{
		printf("mark of student %d after moderation is %d marks added %d \n",i+1,mark[i],mm);
	}
}



