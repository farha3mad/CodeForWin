/***C program to get nth bit of a number***/
#include <stdio.h>
#define CheckBit(num,bit) (num>>bit)&1
int main()
{
	int num,bit;	
	printf("Input number:\n");
	scanf("%d",&num);
	printf("Input nth bit number:\n");
	scanf("%d",&bit);
	printf("%d bit of %d is set (%d)\n",bit,num,CheckBit(num,bit));
	return 0;
}