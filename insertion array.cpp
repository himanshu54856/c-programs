#include<stdio.h>
int main()
{
	int size,i,value,pos;
	printf("enter the size of element :");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("enter the element of array:");
		scanf("%d",&a[i]);
	}
	printf("The array created is:");
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
	printf("enter the value to be updated:");
	scanf("%d",&value);
	printf("enter the position to be updated :");
	scanf("%D",&pos);
	for(i=size;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=value;
	printf("the updated array is :");
	for(i=0;i<=size;i++){
		printf("%d",a[i]);
	}
	return 0;
}
