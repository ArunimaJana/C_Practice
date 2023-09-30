#include<stdio.h>
void fact(int n){
	int i,f=1;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	printf("%d!=%d",n,f);
}
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	fact(n);

	return 0;
}