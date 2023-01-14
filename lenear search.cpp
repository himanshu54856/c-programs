#include<stdio.h>
int main()
{
	int size,i,pos;
	printf("enter the size of array:");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("enter the element:");
		scanf("%d",&a[i]);
	}
	printf("The array created is:");
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
	printf("enter the position to find");
	scanf("%d",&pos);
	for(i=0;i<size;i++)
	{
		if(a[pos]=a[i]){
			printf("found");
			break;}
			else{
			printf("not found");
		}
	}
	return 0;
}
