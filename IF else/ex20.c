/*
 *Write a C program to input basic salary of an employee and calculate gross salary according to given conditions.
 *Basic Salary <= 10000 : HRA = 20%, DA = 80%
 *Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
 *Basic Salary >= 20001 : HRA = 30%, DA = 95%
 */
 
#include <stdio.h>
int main(){
	
	float salary=0,hra,da,gross;
	printf("Input basic salary of an employee: ");
	scanf("%f",&salary);
	
	if(salary <= 10000){
		hra = salary*.2;
		da = salary*.8;
	}
	else if(salary <= 20000){
		hra = salary*.25;
		da = salary*.9;
	}
	else if(salary >= 20001){
		hra = salary*.3;
		da = salary*.95;
	}
	
	gross = salary + hra + da;
	printf("Gross salary = %.2f",gross);
	
	
	return 0;
}