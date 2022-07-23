/*
 *Write a C program to input a number from user 
 *and find reverse of the given number using for loop.
 */
 
#include <stdio.h>
int main(){
	
	int num,new_num,rem=0;
	printf("Input num:");
	scanf("%d",&num);
	
	while(num){
			
		rem = num%10;	
		new_num = new_num*10 + rem;
		num /= 10;
	}
	
	printf("Number in reverse: %d",new_num);

	return 0;
}