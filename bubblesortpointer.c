#include<stdio.h>
int main(){
	int a[20],i,n,j,temp,*p;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(*(p+j)>*(p+j+1)){
				temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	}
	printf("The sorted array is\n");
	for(i=0;i<n;i++){
		printf("%d,",a[i]);
	}
	return 0;
}