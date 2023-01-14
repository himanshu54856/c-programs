#include<stdio.h>
int main()
{
	int i,n,ind;
	int a[n];
	printf("enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the element of array:");
		scanf("%d",&a[i]);
	}
	printf("the array creted is:");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("enter the index to be deleted :");
	scanf("%d",&ind);
	for(i=0;i<n-1;i++){
		a[i]=a[i+1];
	}
	a[n-1]=0;
	printf("\n The updated array is :");
	for(i=0;i<n-1;i++){
		printf("%d",a[i]);
	}
	return 0;
}
