#include<stdio.h>
float mini_calculator(int a,int b,char ch);
void main()
{
float r,op1,op2;
char ch;
printf("Enter A");
scanf("%f",&op1);
printf("Enter B");
scanf("%f",&op2);
printf("////CHOOSE AN OPERATION /////\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
scanf("%c",&ch);
r=mini_calculator(op1,op2,ch);
printf("%.2f",r);
}
float mini_calculator(int a,int b,char ch)
{
int x;
if(ch=='1'){
x=a+b;
return(x);}
if(ch=='2'){
x=a-b;
return(x);}
if(ch=='3'){
x=a*b;
return(x);}
if(ch=='4'){
x=a/b;
return(x);}
else
printf("INVALID ENTRY");
}

 
 
