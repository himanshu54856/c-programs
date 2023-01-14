#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
    printf("enter the string");
	gets(str);
	strrev(str);
	printf("The reverse of string is:%s\n",str);
	return 0;	
}

