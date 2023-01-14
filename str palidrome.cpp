#include<stdio.h>
#include<string.h>
int main()
{
	char str[40],str2[40];
	printf("enter the first string");
	gets(str);
	strcpy(str2,str);
	strrev(str2);
	if(!strcmp(str,str2)==1)
	printf("The string is palindrome\n");
	else
	printf("The string is not palindrome\n");
	return 0;
}
