#include<stdio.h>
int main()
{
	int size,value,i,a[size];
	printf("enter the size of array");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("enter the element of array");
		scanf("%d",&a[i]);
	}
	printf("the array created is");
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
	printf("\n enter the value to be updated");
	scanf("%d",&value);
	for(i=size;i>0;i--){
		a[i]=a[i-1];
	}
	a[0]=value;
	printf("the updated array is ");
	for(i=0;i<=size;i++){
		printf("%d",a[i]);
	}
	return 0;
}
