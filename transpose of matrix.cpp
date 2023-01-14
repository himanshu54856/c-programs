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
    printf("Transpose of matrix");
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		printf("%d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}

