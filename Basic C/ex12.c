/***C program to find square root of a number***/
#include <stdio.h>
#include <math.h>
int main()
{
	double num;
	printf("Enter any number:\n");
	scanf("%lf",&num);
	printf("Square root of %.2lf = %.2lf\n",num,sqrt(num));
	//printf("Square root of %.2lf = %.2lf\n",num,pow(num,.5));
	return 0;
}