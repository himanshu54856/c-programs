#include<stdio.h>
int main()
{
	float a,b,c,d,e,sum,avg;
	printf("marks in english= ");
	scanf("%f",&a);
	printf("marks in computer= ");
	scanf("%f",&b);
	printf("marks in chemistry= ");
	scanf("%f",&c);
	printf("marks in hindi= ");
	scanf("%f",&d);
	printf("marks in maths= ");
	scanf("%f",&e);
	sum=(a+b+c+d+e);
	printf("total marks=%f",sum);
	avg=(sum/500)*100;
	printf("average of marks=%f",avg);
	}
