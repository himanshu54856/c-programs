#include<stdio.h>
int main()
{
	int a[100],i,size,num,pos;
    printf("enter the size of an array");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("enter the element");
		scanf("%d",&a[i]);
	}	
	printf("pos");
	scanf("%d",&pos);
	printf("element you want to insert ");
	scanf("%d",&num);
for(i=size-1;i>=pos-1;i--)
{  a[i+1]=a[i];
} a[pos-1]=num;
   size++;
   for(i=0;i<size;i++){
   	printf("%d",a[i]);
   }
   return 0;
}
