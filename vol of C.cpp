#include<stdio.h>
void main()
{
	float rad,hi,vol;
	printf("enter the radius:");
	scanf("%f",&rad);
	printf("enter the height:");
	scanf("%f",&hi);
	vol=3.14*rad*rad*hi;
	printf("the volume of the cylinder is %.2f\n",vol);
	
	}
