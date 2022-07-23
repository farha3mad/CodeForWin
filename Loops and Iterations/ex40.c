/*
 *Write a C program to input binary number from user 
 *and convert binary number to decimal number system.
 */
 
#include <stdio.h>
#include <math.h>
int main(){
	
	int binary,decimal=0,i=0;
	printf("Enter the binary number: ");
	scanf("%d",&binary);
	
	while(binary){
		
		//check if the digit is 1
		if(binary%10 == 1){
			decimal += (pow(2,i));
		}
		i++;
		binary /= 10;
	}
	printf("Decimal = %d",decimal);
	
	return 0;
}