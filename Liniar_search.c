#include<stdio.h>
int main(){
	int a[10],i,s,n,flag=0;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the item to be searched:");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(a[i]==s){
			printf("The item is found in %dth cell",i+1);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("Item is not found");
	}
	return 0;
}