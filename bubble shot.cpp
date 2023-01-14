#include<stdio.h>
int main()
{
	int i,j,n,temp; 
	int a[n];
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the element of array");
		scanf("%d",&a[i]);
	}
	printf("the unshorted array is :");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j=1]=temp;
				
				}
			}
		}
		printf("searched array is");
		for(i=0;i<n;i++){
			printf("%d",a[i]);
		}
		return 0;
	}
	

