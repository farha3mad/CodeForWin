/*
 *Write a C program to check whether a triangle
 *is valid or not if angles are given using if else.
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
	
	//angles must be greater than 0 and the total sum = 180
	if((ang1+ang2+ang3 == 180) && (ang1>0) && (ang2>0) && (ang3>0)){
		printf("The triangle is valid");
	}
	else{
		printf("The triangle is NOT valid!!");
	}
	
	return 0;
}