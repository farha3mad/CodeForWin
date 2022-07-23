/*
 *Write a C program to create menu driven calculator
 *that performs basic arithmetic operations 
 *(add, subtract, multiply and divide) using switch case
 */
 
#include <stdio.h>
int main(){
	
	char op;
	float num1, num2;
	printf("Enter the equation:\n");
	scanf("%f%c%f",&num1,&op,&num2);
	
	switch(op){
		
		case '+':
			printf("sum = %.2f",num1+num2);
			break;
		case '-':
			printf("subtraction = %.2f",num1-num2);
			break;
		case '*':
			printf("multiplication = %.2f",num1*num2);
			break;
		case '/':
			if(num2 == 0){
				printf("Division by zero!!");
				
			}
			else{
				printf("Division = %.2f",num1/num2);
			}
			break;
		default: 
			printf("Invalid Operation!!!");
			break;
	}
	
	
	return 0;
}
