/***C program to find power of a number using pow function***/
#include <stdio.h>
#include <math.h>
int main()
{
	double base,exp;
	printf("Enter base:\n");
	scanf("%lf",&base);
	printf("Enter exponent:\n");
	scanf("%lf",&exp);
	printf("%.2lf ^ %.2lf = %.2lf",base,exp,pow(base,exp));
	return 0;
}