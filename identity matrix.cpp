#include<stdio.h>
int main()
{
	int m,n,i,j,flag=1;
	 int a[i][j];
	printf("enter the number of rows and column");
	scanf("%d %d",&m,&n);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("enter the element ");
			scanf("%d",&a[i][j]);
			if(i==j&&a[i][j]!=1||i!=j&&a[i][j]!=0)
			flag=0;
		}
	}
	printf("the array created is :");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	if(flag)
	printf("it is an identity matrix\n");
	else 
	printf("it is not an identity matrix");
	return 0;

}
