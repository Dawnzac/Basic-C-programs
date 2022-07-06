#include<stdio.h>
void main()
{
struct distance
{
int feet,inch;
}d1,d2,d3;
printf("DISTANCE 1 : \n");
printf("Enter the distance in feet :");
scanf("%d",&d1.feet);
printf("Enter the distance in inches :");
scanf("%d",&d1.inch);
printf("DISTANCE 2 : \n");
printf("Enter the distance in feet :");
scanf("%d",&d2.feet);
printf("Enter the distance in inches :");
scanf("%d",&d2.inch);
printf("DISTANCE 1 :%d feet  ",d1.feet);
printf("%d inches  \n",d1.inch);
printf("DISTANCE 2 :%d feet  ",d2.feet);
printf("%d inches  \n",d2.inch);
d3.feet=d1.feet+d2.feet;
d3.inch=d1.inch+d2.inch;
while(d3.inch>=12)
{
d3.feet=d3.feet+1;
d3.inch=d3.inch-12;
}
printf("TOTAL DISTANCE  :%d feet  ",d3.feet);
printf("%d inches  \n",d3.inch);
}
