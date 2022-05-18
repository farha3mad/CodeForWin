/***C program to find diameter, circumference and area of circle***/
#include <stdio.h>
int main()
{
	float r;
	printf("Enter the raduis:\n");
	scanf("%f",&r);
	printf("Diameter = %0.3f units\n",2*r);
	printf("Circumference = %0.3f units\n",2*3.14*r);
	printf("Area = %0.3f sq. units\n",3.14*r*r);
	return 0;
}