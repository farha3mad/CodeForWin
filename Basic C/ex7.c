/***C program to convert centimeter to meter and kilometer***/
#include <stdio.h>
int main()
{
	float centimeter,meter,kilometer;
	printf("Enter length in centimeter =\n");
	scanf("%f",&centimeter);
	printf("Length in meter = %.02f m\n",(centimeter/100));
	printf("Length in kilometer = %.02f km\n",(centimeter/(100*1000)));
	return 0;
}