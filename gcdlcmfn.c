#include<stdio.h>
int gcd(int a,int b){
	if(a==0){
		return b;
	}
	else if(b==0){
		return a;
	}
	else{
		return(gcd(b,a%b));
	}
}
int lcm(int x,int y,int g){
	int l;
	l=x*y/g;
	return l;
}
int main(){
	int x,y,g,l;
	printf("Enter two numbers:");
	scanf("%d %d",&x,&y);
	g=gcd(x,y);
	l=lcm(x,y,g);
	printf("GCD=%d\n",g);
	printf("LCM=%d",l);
	return 0;
}