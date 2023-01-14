#include<stdio.h>
int main()
{
	int a;
	printf("enter the result");
	scanf("%d",&a);
	if ((a>=90)&&(a<=98)){
		printf("first");
	}
	else if((a>=60)&&(a<90)){
		printf("second");
	}
	else if((a>=40)&&(a<60)){
		printf("third");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
