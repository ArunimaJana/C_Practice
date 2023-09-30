#include<stdio.h>
int main(){
	int a[20],i,n,temp,j;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		while(temp<a[j]&&j>=0){
			a[j+1]=a[j];
			j--;
		}
		j++;
		a[j]=temp;
	}
	printf("The sorted array is\n");
	for(i=0;i<n;i++){
		printf("%d,",a[i]);
	}
	return 0;
}