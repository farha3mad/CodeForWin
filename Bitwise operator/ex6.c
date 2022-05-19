/***C program to toggle or invert nth bit of a number***/
#include <stdio.h>
#define ToggleBit(num,bit) num ^= (1<<bit)
int main()
{
	int num,bit;	
	printf("Input number:\n");
	scanf("%d",&num);
	printf("Input nth bit number:\n");
	scanf("%d",&bit);
	printf("Number after toggling bit %d: %d in decimal\n",bit,ToggleBit(num,bit));
	return 0;
}