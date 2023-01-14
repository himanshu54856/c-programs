#include<stdio.h>
int main()
{
	int a[100],i,size,num;
	printf("enter size of an array");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("enter the element");
		scanf("%d",&a[i]);
	}
	printf("enter element you want to insert");
	scanf("%d",&num);
	size=size++;
	a[size-1]=num;
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
	return 0;
}
