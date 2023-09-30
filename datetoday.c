#include<stdio.h>
int main(){
	int year,month,day ,given_year = 1900,countgap,leapyear,n,m,y;
	printf("Enter year:");
	scanf("%d",&year);
	printf("Enter month:");
	scanf("%d",&month);
	printf("Enter day:");
	scanf("%d",&day);
	countgap=year-given_year;
	leapyear=countgap/4;
	switch(month){
		case 1:
			m=0;
			break;
		case 2:
			m=30;
			break;		
		case 3:			
			if(year%4==0){
				m=59;
			}
			else{
				m=58;
			}
			break;
		case 4:
			if(year%4==0){
				m=90;
			}
			else{
				m=89;
			}
			break;
		case 5:
			if(year%4==0){
				m=120;
			}
			else{
				m=119;
			}
			break;
		case 6:
			if(year%4==0){
				m=151;
			}
			else{
				m=150;
			}
			break;
		case 7:
			if(year%4==0){
				m=181;
			}
			else{
				m=180;
			}
			break;
		case 8:
			if(year%4==0){
				m=212;
			}
			else{
				m=211;
			}
			break;
		case 9:
			if(year%4==0){
				m=243;
			}
			else{
				m=242;
			}
			break;
		case 10:
			if(year%4==0){
				m=273;
			}
			else{
				m=272;
			}
			break;
		case 11:
			if(year%4==0){
				m=304;
			}
			else{
				m=303;
			}
			break;
		case 12:
			if(year%4==0){
				m=334;
			}
			else{
				m=333;
			}
			break;
		default:
			printf("Enter a valid month");	
	}
	y=(countgap+leapyear)%7;
	n=(y+m+day)%7;
	switch(n){
		case 0:
			printf("Monday");
			break;
		case 1:
			printf("Tuesday");
			break;
		case 2:
			printf("Wednesday");
			break;
		case 3:
			printf("Thursday");
			break;
		case 4:
			printf("Friday");
			break;
		case 5:
			printf("Saturday");
			break;
		case 6:
			printf("Sunday");
			break;
		default:
			printf("Enter a date which comes after 01/01/1900");
	}
	return 0;
}