#include<stdio.h>
#include<string.h>
int power1(int base,int p){
	if(p==0)
	return 1;
	else
	return base*power1(base,p-1);
}
int main()
{
	int base,p;
	printf("enter the base");
	scanf("%d",&base);
	printf("enter the power");
	scanf("%d",&p);
	printf("The exponential value is:%d\n",power1(base,p));
}
