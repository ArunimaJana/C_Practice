#include<stdio.h>
int main(){
	int a[10][10],o,i,j,sum,sum1=0,sum2=0;
	printf("Enter the order of the matrix:");
	scanf("%d",&o);
	printf("Enter the elements:\n");
	for(i=0;i<o;i++){
		for(j=0;j<o;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<o;i++){
		sum=0;
		for(j=0;j<o;j++){
			sum=sum+a[i][j];
		}
		printf("Sum of %d row: %d\n",(i+1),sum);
	}
	for(j=0;j<o;j++){
		sum=0;
		for(i=0;i<o;i++){
			sum=sum+a[i][j];
		}
		printf("Sum of %d collumn: %d\n",(j+1),sum);
	}
	for(i=0;i<o;i++){
		for(j=0;j<o;j++){
			if(i==j){
				sum1=sum1+a[i][j];
			}
			else if(i+j==o-1){
				sum2=sum2+a[i][j];
			}
		}
	}
	printf("Sum of 1st diagonal:%d\n",sum1);
		printf("Sum of 2st diagonal:%d\n",sum2);
	return 0;
}