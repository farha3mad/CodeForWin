/***C program to calculate total average and percentage of five subjects***/
#include <stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5;
	float total,avg,percent;
	printf("Enter marks of five subjects:\n");
	scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
	total = sub1+sub2+sub3+sub4+sub5;
	avg = total/5.0;
	percent = (total/500.0)*100;
	printf("Total = %0.2f\n",total);
	printf("Average = %0.2f\n",avg);
	printf("Percentage = %0.2f\n",percent);
	return 0;
}