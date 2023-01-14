#include <stdio.h>
int main()
{
	float principal rate,time,simple interst;
	printf("enter the rate of interest:");
	scanf("%f"&rate);
	printf("enter the time value in year");
	scanf("%f",&time);
	printf("enter the principal amount:");
	scanf("%f",&principal);
	simple_interest=(rate*time*principal)/100;
	printf("the principal interest is %f\n,simple_interest");
	return0;
	}
