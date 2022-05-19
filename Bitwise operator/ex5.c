/***C program to clear nth bit of a number***/
#include <stdio.h>
#define ClearBit(num,bit) num &= ~(1<<bit)
int main()
{
	int num,bit;	
	printf("Input number:\n");
	scanf("%d",&num);
	printf("Input nth bit number:\n");
	scanf("%d",&bit);
	printf("Number after clearing bit %d: %d in decimal\n",bit,ClearBit(num,bit));
	return 0;
}