/***C program to flip all bits of a binary number***/
#include <stdio.h>
int main()
{
	int num;	
	printf("Input number:\n");
	scanf("%d",&num);
	printf("Number after bits are flipped: %d (in decimal)",~num);
	return 0;
}