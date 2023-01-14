#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number a");
	scanf("%d",&a)
	printf("enter the second number b");
	scanf("%d",&b)
	a=a^b;
	b=a^b;
	a=a^b;
	printf("the value of before a ");
	return 0;
}
