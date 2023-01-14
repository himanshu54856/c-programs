#include<stdio.h>
int main()
{
	int a;
	printf("Enter your age");
	scanf("%d",&a);
	if (a>18){
		printf("eligible for vote");
	}
		else {
		printf("not eligible");
		}
	return 0;
}
