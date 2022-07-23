/*
 *Write a C program to check
 *whether an alphabet is
 *vowel or consonant using if else.
 */
 
#include <stdio.h>
int main(){
	
	char ch;
	printf("Input character:");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
		printf("%c is a vowel",ch);
	}
	else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
		printf("%c is Consonant",ch);
	}
	else{
		printf("%c is not an Alphabet!!",ch);
	}
	
	
	
	
	
	return 0;
}