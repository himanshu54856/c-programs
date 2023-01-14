#include<stdio.h>
int main()
{
	int i,size,value;
	int a[size];
	printf("enter size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("enter the element of array");
		scanf("%d",&a[i]);
	}
	printf("the array created is :");
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
	printf("enter the value to be updated:");
	scanf("%d",&value);
	a[size]=value;
	printf("the updated array is:");
	for(i=0;i<=size;i++){
		printf("%d",a[i]);
	}
	return 0;
	}
