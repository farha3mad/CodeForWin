/*
 *Write a C program to print all natural numbers
 *in reverse from n to 1 using for loop.
 */
 
#include <stdio.h>
int main(){
	
	int n;
	printf("Input upper limit: ");
	scanf("%d",&n);
	
	while(--n){
		
		printf("%d ",n);
		
	}
	
	return 0;
}