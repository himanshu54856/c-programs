#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first no",a);
	scanf("%d",&a);
	printf("enter the second no",b);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapping the two no %d %d\n",a,b);
	return 0;
	
}
