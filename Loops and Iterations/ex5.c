/*
 *Write a C program to print all odd numbers
 *from 1 to n using for loop. 
 */
 
#include <stdio.h>
int main(){
	
	int n,i;
	printf("Input upper limit: ");
	scanf("%d",&n);
	
	printf("Odd numbers between 1 to %d: \n",n);
	for(i=0 ; i<=n ; i++){
		
		if(!(i%2 == 0)){
			printf("%d ",i);
		}
		
	}

	return 0;
}