/***C program to check Most Significant Bit (MSB) of a number is set or not***/
#include <stdio.h>
int main()
{
	int num,num_of_bits,msb;
	printf("Input number:\n");
	scanf("%d",&num);
	num_of_bits = sizeof(num)*8; //int -> 4 bytes -> 32 bit ->(0-31)
	msb = num_of_bits-1;
	if(num & (1<<msb))
		printf("Most Significant Bit of %d is set (1)\n",num);
	else
		printf("Most Significant Bit of %d is NOT set (0)\n",num);
	
	return 0;
}