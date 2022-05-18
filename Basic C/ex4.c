/****Write a C program to input length and width of a rectangle and calculate perimeter of the rectangle****/
#include <stdio.h>
int main()
{
	float width,lenth;
	printf("Enter the lenth:\n");
	scanf("%f",&lenth);
	printf("Enter the width:\n");
	scanf("%f",&width);
	printf("Perimeter of rectangle = %0.3f units",2*(width+lenth));
	return 0;
}