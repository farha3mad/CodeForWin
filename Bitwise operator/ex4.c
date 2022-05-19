/***C program to set nth bit of a number***/
#include <stdio.h>
#define SetBit(num,bit) num |= 1<<bit
int main()
{
	int num,bit;	
	printf("Input number:\n");
	scanf("%d",&num);
	printf("Input nth bit number:\n");
	scanf("%d",&bit);
	printf("Number after setting bit %d: %d in decimal\n",bit,SetBit(num,bit));
	return 0;
}