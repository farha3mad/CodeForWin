/***C program to convert temperature from degree celsius to fahrenheit***/
#include <stdio.h>
int main()
{
	float degree;
	printf("Enter temperature in Celsius:\n");
	scanf("%f",&degree);
	printf("Temperature in Fahrenheit = %0.3f F",(degree*(9.0/5.0))+32);
	
	return 0;
}