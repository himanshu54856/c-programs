#include<stdio.h>
int main()
{
	
	int n,reverse=0,rem;
	printf("enter the number ");
	scanf("%d",&n);
	while(n!=0){
		printf("the reverse number is %d",rem);
		rem=n%10;
		reverse =reverse*10+rem;
	}
	return 0;	
}
