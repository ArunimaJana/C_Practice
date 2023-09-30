#include<stdio.h>
int sum(int a,int b){
	return(a+b);
}
int sub(int a,int b){
	return(a-b);
}
int mul(int a,int b){
	return(a*b);
}
int div(int a,int b){
	return(a/b);
}
int mod(int a,int b){
	return(a%b);
}

int main(){
	int a,b,c,z;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	printf("1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Modulus");
	scanf("%d",&c);
	switch(c){
		case 1:
			z=sum(a,b);
			break;
		case 2:
			z=sub(a,b);
			break;
		case 3:
			z=mul(a,b);
			break;
		case 4:
			z=div(a,b);
			break;
		case 5:
			z=mod(a,b);
			break;
		default:
			printf("Enter choose between 1 to 5");
	}
	printf("Result = %d",z);
	return 0;
}