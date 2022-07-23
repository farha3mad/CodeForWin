/*
 *Write a C program to input marks of five subjects
 *Physics, Chemistry, Biology, Mathematics and Computer 
 *calculate percentage and grade
 */
 
#include <stdio.h>
int main(){
	
	float sub1,sub2,sub3,sub4,sub5;
	float percentage;
	printf("Enter the marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer: \n");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	
	percentage = (sub1+sub2+sub3+sub4+sub5)/5.0;
	printf("Percentage = %.2f",percentage);
	
	if(percentage >= 90){
		printf("Grade A");
	}
	else if(percentage >= 80){
		printf("Grade B");
	}
	else if(percentage >= 70){
		printf("Grade C");
	}
	else if(percentage >= 60){
		printf("Grade D");
	}
	else if(percentage >= 40){
		printf("Grade E");
	}
	else if(percentage < 40){
		printf("Grade F");
	}
	else{
		printf("Invalid grade!!");
	}
	
	return 0;
}