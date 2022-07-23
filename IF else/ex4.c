/*
 *Write a C program to check whether a number
 *is divisible by 5 and 11 or not using if else.
 */
 
#include <stdio.h>
int main(){
	
	int number;
	printf("Input number:");
	scanf("%d",&number);
	
	//using logical and operator to check
    //if the number is divisible by 5 and 11 both 
	if((number%5 == 0)&&(number%11 == 0)){
		printf("Number is divisible by 5 and 11");
	}
	else{
		printf("Number is not divisible by 5 and 11");
	}
	
	return 0;
}