#include<stdio.h>
int main()
{
	int size,i,sum=0;
	printf("enter the size of array ");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("enter the element");
		scanf("%d",&a[i]);
	}
	printf("the array created is :");
	for(i=0;i<size;i++){
	printf("%d",a[i]);
}
printf("\n");
	return 0 ;
}
