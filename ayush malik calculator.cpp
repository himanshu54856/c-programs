#include<stdio.h>
int main() 
{
float a,b,c;
printf("if you want to add then press 1 if you want to subtract then press 2 if you want to multiply then press 3 if you want to divide then press 4\n");
scanf("%f",&a);
printf("type your first number=");
scanf("%f",&b);
printf("type your second number=");
scanf("%f",&c);
if (a==1){
	printf("%f",b+c);
}
else if(a==2){
	printf("%f",b-c);
}
else if(a==3){
	printf("%f0.2",b*c);
}
else if(a==4){
	printf("%f",b/c);
}
else {
	printf("wrong command");
}
return 0;
}







