/***Write a C program to input length and width of a rectangle and find area of the given rectangle.***/
#include <stdio.h>
int main()
{
	float width,lenth;
	printf("Enter the lenth:\n");
	scanf("%f",&lenth);
	printf("Enter the width:\n");
	scanf("%f",&width);
	printf("Area of rectangle = %0.3f sq. units",(width*lenth));
	return 0;
}