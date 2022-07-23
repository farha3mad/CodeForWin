/*
 *Write a C program to input a number from user and print
 *multiplication table of the given number using for loop.
 */
 
#include <stdio.h>
int main(){
	
	int num,i;
	printf("Input num:");
	scanf("%d",&num);
	
	for(i=1 ; i<=12 ; i++){
		
		printf("%d * %d = %d\n",num,i,num*i);

	}
	return 0;
}