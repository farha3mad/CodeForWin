/*
 *Write a C program to input sides of a triangle and check whether
 *a triangle is equilateral, scalene or isosceles triangle using if else.
 */
 
#include <stdio.h>
int main(){
	
	int ang1,ang2,ang3;
	printf("Input first angle: ");
	scanf("%d",&ang1);
	printf("Input second angle: ");
	scanf("%d",&ang2);
	printf("Input thrid angle: ");
	scanf("%d",&ang3);
	
	//check the validation of triangle
	if(!((ang1+ang2+ang3 == 180) && (ang1>0) && (ang2>0) && (ang3>0))){
		printf("The triangle is NOT valid!!");
	}
	else if((ang1==ang2) && (ang2==ang3)){
		printf("Triangle is equilateral triangle");
	}
	else if((ang1==ang2) || (ang1==ang3) || (ang2==ang3)){
		printf("Triangle is isosceles triangle");
	}
	else if((ang1!=ang2) && (ang1!=ang3) && (ang2!=ang3)){
		printf("Triangle is scalene triangle");
	}
	
	
	
	return 0;
}