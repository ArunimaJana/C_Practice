#include<stdio.h>
int main(){
	int a[20],i,search,n,min,max,mid,flag=0;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the item to be searched:");
	scanf("%d",&search);
	min=0;
	max=n-1;
	while(min<=max){
		mid=(min+max)/2;
		if(a[mid]==search){
			flag=1;
			break;
		}
		else if(search>a[mid]){
			min=mid+1;
		}
		else if(search<a[mid]){
			max=mid-1;
		}
	}
	if(flag==0){
		printf("Search item is not found");
	}
	else{
		printf("Search item is in %dth cell",mid+1);
	}
	return 0;
}