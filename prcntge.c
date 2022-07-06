#include<stdio.h>
void main()
{
	float s1[4][3],s2[4][3],tt[4][3];
	char elg[4][3],sp[4][3];
	int i,j;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf("FIRST HALF\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter the percentage of student %d in subject %d : ",i+1,j+1);
		scanf("%f",&s1[i][j]);
		}
	}
	printf("SECOND HALF\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter the percentage of student %d in subject %d : ",i+1,j+1);
		scanf("%f",&s2[i][j]);
		}
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf("FIRST HALF\n");
	printf("\tsub 1 \t\tsub 2 \t\tsub 3\n");
	for(i=0;i<4;i++)
	{
	printf("student %d :",i+1);
		for(j=0;j<3;j++)
		{
		printf("%0.2f % \t ",s1[i][j]);
		}
		printf("\n");
	}
	printf("SECOND HALF\n");
	printf("\tsub 1 \t\tsub 2 \t\tsub 3\n");
	for(i=0;i<4;i++)
	{
	printf("student %d :",i+1);
		for(j=0;j<3;j++)
		{
		printf("%0.2f % \t ",s2[i][j]);
		}
		printf("\n");
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
		 tt[i][j]=(s1[i][j]+s2[i][j])/2;
		 	if(tt[i][j]<75)
		 		elg[i][j]='N';
		 	else
		 		elg[i][j]='E';
		}
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf("TOTAL PERCENTAGE \n");
	printf("\tsub 1 \t\tsub 2 \t\tsub 3\n");
	for(i=0;i<4;i++)
	{
	printf("student %d : ",i+1);
		for(j=0;j<3;j++)
		{
		printf("%0.2f % \t ",tt[i][j]);
		}
		printf("\n");
	}
	printf("ELIGIBILITY CHART \n");
	for(i=0;i<4;i++)
	{
	printf("student %d : ",i+1);
		for(j=0;j<3;j++)
		{
		printf("%c\t",elg[i][j]);
		}
		printf("\n");
	}
}
