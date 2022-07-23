/*
 *Write a C program to find all roots
 *of a Quadratic equation using switch case.
 */
 
#include <stdio.h>
int main(){
	
	int num,product=1,rem=0;
	printf("Input num:");
	scanf("%d",&num);
	
	if(num == 0){
		product = 0;
	}
	
	while(num){
		rem = num%10;
		product *= rem; 	
		num /=10;
	}
	printf("Product of digits: %d",product);
	
	return 0;
}