#include <stdio.h>
int main(){
int num;
printf("Enter your total mark ");
scanf("%d",&num);
printf(" You entered %d", num); 
	if (num>700) 
		printf(" ! Wrong data ");
	else if(num >= 600){
		printf(" You got A grade"); 
		}
	else if ( num >=450){ 
		printf(" You got B grade");
		}
	else if ( num >=300){
		printf(" You got C grade");
		}
	else {
		printf(" You Failed in this exam");
		}
return 0;
}