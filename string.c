#include<stdio.h>
#include<string.h>
void main()
{
char str1[20]={},str2[20]={};
printf("ENTER FIRST STRING :");
scanf("%s",&str1);
printf("ENTER SECOND STRING :");
scanf(" %s",&str2);
int temp1=strlen(str1),temp2=strlen(str2),i,j;
str1[temp1]=' ';
for(i=temp1+1,j=0;i<=temp1+temp2;i++,j++)
{
str1[i]=str2[j];
}
puts(str1);
}
