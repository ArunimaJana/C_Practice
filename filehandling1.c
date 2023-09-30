#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp=NULL;
	char ch[100];
	fp=fopen("abc.txt","r");
	if(fp==NULL){
		printf("File doesn't exist");
		exit(1);
	}
	while(!feof(fp)){
		fgets(ch,40,fp);
		printf("%s",ch);
	}
	fclose(fp);
	fp=fopen("abc.txt","a");
	if(fp==NULL){
		printf("File doesn't exist");
		exit(1);
	}
	printf("\nEnter the content:");
	gets(ch);
	fprintf(fp,"\n%s",ch);
	printf("Successfully entered");
	fclose(fp);
	return 0;
}