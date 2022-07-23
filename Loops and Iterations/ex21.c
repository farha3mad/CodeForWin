/*
 *Write a C program to find power of a number using for loop.
 */
 
#include <stdio.h>
int main(){
	
	int base,expo,result=1,i;
	printf("Input base: ");
	scanf("%d",&base);
	printf("Input exponent: ");
	scanf("%d",&expo);
	i = expo;
	
	while(i--){
		result *= base;		
	}
	printf("%d ^ %d = %d",base,expo,result);
	return 0;
}