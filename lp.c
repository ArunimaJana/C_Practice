#include<stdio.h>
int main(){
	int i=01/01/2000,diff,lp, year,total_day, day;
	printf("enter a year:");
	scanf("%d",&year);
	year=(year-1)-i; /*calculatting the gap between years*/
	diff=year-lp;
	total_day=(diff*365)+(lp*366)+1;
	day=total_day%7;
		printf("the day of the year is:%d",day);
  switch(day){
  	case 0:
  		printf("monday \n");
  		break;
  	case 1:
  		printf("tuesday\n");
  		break;
  	case 2:
	  printf("wednesday\n");
	  break;
	case 3:
	  printf("thrusday\n");
	  break;
	case 4:
	   printf("friday\n");
	   break;
	case 5:
	   printf("saturday\n");
	   break;
	case 6:
	   printf("sunday\n"); 
	   break;    	
  }
  return 0; 	
	}