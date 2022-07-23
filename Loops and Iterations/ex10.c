/*
 *Write a C program to input a number from user 
 *and count number of digits in the given integer using loop.
 */
 
#include <stdio.h>
int main(){
	
	int num,count=0;
	printf("Input num:");
	scanf("%d",&num);
	
	while(num){
		count++;
		num /= 10;
	}
	printf("Number of digits: %d",count);
	
	
	return 0;
}