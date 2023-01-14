#include<stdio.h>
int main()
{
	int m,n,i,j,count=0;
	 int a[i][j];
	printf("enter the number of rows and column");
	scanf("%d %d",&m,&n);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("enter the element ");
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
		    count++;
		}
	}
	printf("the array created is :");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	if(count>m*n/2)
	printf("it is a sparse matrix\n");
	else
	printf("it not a sparse matrix\n");
	return 0;
}

