/*
 *Write a C program to enter month number between(1-12) 
 *and print number of days in month using if else.
 */
 
#include <stdio.h>
int main(){
	
	int month;
	int days=0;
	printf("Input month number:");
	scanf("%d",&month);
	
	if(month==2){
		printf("Days in month %d = 28 day\n",month);
	}
	else if(month==1 || month==3 || month==5 || month==7 || month==9 || month==10 || month==12 ){
		printf("Days in month %d = 31 day\n",month);
	}
	else if(month==4 || month==6 || month==8 || month==11){
		printf("Days in month %d = 30 day\n",month);
	}
	else {
		printf("Invalid Month!!\n");
	}
	
	return 0;
}