#include<stdio.h>
int main()
{
	int i,size;
	int a[10];
	printf("enter the size of array");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("enter element of array:");
		scanf("%d",&a[i]);
	}
	printf("the array created is :");
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
	printf("the array are in reverse order:");
	for(i=size-1;i>=0;i--){
		printf("%d",a[i]);
	}
	return 0;
	}
