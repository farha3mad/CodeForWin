/*
 *Write a C program to input a character from user
 *and check whether the given character is alphabet
 *or not using if else.
 */
 
#include <stdio.h>
int main(){
	
	char ch;
	printf("Input character:");
	scanf("%c",&ch);
	
	//checking using the ASCII value
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
		
		printf("It is an Alphabet");
	}
	else{
		
		printf("It is NOT an Alphabet!!");
	}
	
	return 0;
}