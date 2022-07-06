#include<stdio.h>
void read_array(int [], int);
void print_array(int [], int);
int search_array(int [], int, int);
int sort_array(int [], int);
int delete_array(int [], int ,int);
int merge_array(int [],int ,int [],int ,int []);
void main()
{
	int ar1[20],n1,sno,op,pos,newn,deln;
	int ar2[20],ar3[20],n2;
	printf("enter the size of the array: ");
	scanf("%d",&n1);
	read_array(ar1,n1);
	print_array(ar1,n1);
	while(1)
	{
		printf("\n************************\n1.Search\n2.Sort\n3.insertion\n4.deletion\n5.traverse\n6.merge");
		printf("\nEnter you choice\n **************************\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
					printf("enter the element to search: ");
					scanf("%d",&sno);
					pos=search_array(ar1,n1,sno);
					if(pos==-1)
						printf("element not found: ");
					else
						printf("element found at position %d\n",pos);
					break;
			case 2:
					sort_array(ar1,n1);
					break;
			case 3:
					printf("enter the element to insert: ");
					scanf("%d",&newn);
					ar1[n1]=newn;
					n1++;
					break;
			case 4:
					printf("enter the element to delete: ");
					scanf("%d",&deln);
					pos=search_array(ar1,n1,deln);
					del_array(ar1,n1,pos);
					n1=n1-1;
					print_array(ar1,n1);
					break;

			case 5:
					print_array(ar1,n1);
					break;
			case 6:
					printf("enter the size of array : ");
					scanf("%d",&n2);
					read_array(ar2,n2);
					merge_array(ar1,n1,ar2,n2,ar3);
					break;
		}

	}
}
void read_array(int x[], int n)
{
	printf("enter the array elements: ");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		printf(" ");
	}
}
void print_array(int x[], int n)
{
	printf("array elements: ");
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d",x[i]);
	}
}
int search_array(int x[], int n,int ch)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(x[i]==ch)
		{
			return(i);
		}
	}
	if(i==n)
		return(-1);
}

int del_array(int x[],int n,int pos)
{
	int i,j;
		for(j=pos;j<n;j++)
		{
			x[j]=x[j+1];
		}
}
int sort_array(int x[], int n)
{
	int i,temp=0,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
}

int merge_array(int a[],int n1,int b[],int n2,int c[])
{
	int i,j,n3;
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<n2;j++,i++)
	{
		c[i]=b[j];
	}
	n3=n1+n2;
	print_array(c,n3);
}
