#include<stdio.h>
int main()
{
	char day;
	printf("enter the days");
	scanf("%d",&day);
	switch (day) {
	case 1: printf("Monday\n");
	break;
	case 2: printf("tuesday\n");
	break;
	case 3: printf("wednessday\n");
	break;
	case 4: printf("saturday\n");
	break;
	default: printf("sunday\n");
	break;
	return 0;
}
}
