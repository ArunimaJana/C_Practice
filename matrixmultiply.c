#include<stdio.h>
int main(){
	int a[10][10],b[10][10],m[10][10],r1,c1,c2,r2,i,j,k;
	printf("Enter the row and collumn of 1st matrix:");
	scanf("%d %d",&r1,&c1);
	printf("Enter the row and collumn of 2nd matrix:");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2){
		printf("Matrix multiplication can't happen");
	}
	else{
		printf("Enter the elements of 1st matrix:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of 2nd matrix:\n");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				m[i][j]=0;
				for(k=0;k<r2;k++){
					m[i][j]=m[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printf("Result:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				printf("%d ",m[i][j]);
			}
			printf("\n");
		}	
		
	}
	return 0;	
}