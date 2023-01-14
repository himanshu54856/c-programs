#include<stdio.h>
int main()
{
	int a;
	printf("CBSE-1\nUP Board-2\n");
	printf("Enter as per your board: ");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("You selcted CBSE Board\nYour subjcts are:\n1.Mathematics\n2.Physics\n3.Chemistry\n4.English\n5.IP");
			break;
		case 2:
			printf("You selected UP Board\nYour subjects are:\n1.Ganit\n2.Bhautik Vigyan\n3.Rasaynik Vigyan\n4.Angreji\n5.Computer.");
			break;
		default: printf("Error 404");
	}return 0;
}
