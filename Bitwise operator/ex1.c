/***C program to check Least Significant Bit (LSB) of a number is set or not***/
#include <stdio.h>
int main()
{
	int num;
	printf("Input number:\n");
	scanf("%d",&num);
	if(num&1)
		printf("Least Significant Bit of %d is set (1)\n",num);
	else
		printf("Least Significant Bit of %d is NOT set (0)\n",num);
		
	return 0;
}