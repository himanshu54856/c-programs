#include <stdio.h>
int main()
{
    int i,pos,size,x=0;
    printf("enter the size os array ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        printf("enter the element");
        scanf("%d",&a[i]);
    }
    printf("enter the position to find ");
    scanf("%d",&pos);
    for(i=0;i<size;i++)
    {
    	if(a[i]==pos)
    	x++;
	}
    if(x!=0)
    printf("Found");
    else
    printf("Not found");
    return 0;
}

