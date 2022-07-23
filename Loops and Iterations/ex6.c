/*
 *Write a C program to find the sum of all natural numbers
 *between 1 to n using for loop.
 */
 
#include <stdio.h>
int main(){
	
	int n,i,sum=0;
	printf("Input upper limit: ");
	scanf("%d",&n);
	i=n;
	
	while(i){
		
		sum += i;
		i--;
	}
	printf("Sum of natural numbers 1-%d: %d",n,sum);
	return 0;
}