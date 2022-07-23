/*
 *Write a C program to find all roots of a Quadratic equation using switch case. 
 */
#include <stdio.h>
#include <math.h>
int main(){
	
	float a,b,c,r1,r2,img;
	float disc;
	
	printf("Enter the coefficients of quadratic equation: \n");
	printf("Enter a: ");
	scanf("%f",&a);
	printf("Enter b: ");
	scanf("%f",&b);
	printf("Enter c: ");
	scanf("%f",&c);
	
	disc = (b * b) - (4 * a * c) ;
	
	switch(disc>0){
		//positive
		case 1:	
		
		r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
		
		printf("Two distinct and real roots are: %.2f , %.2f",r1,r2);
		break;
		//Not positive
		case 0:
		//equals 0
		if(disc == 0){
			
			r1 = -b / (2 * a);
			r2 = -b / (2 * a);
            printf("Two equal and real roots are: %.2f , %.2f", r1, r2);
			
		}
		//negative
		else{
			
			r1 = -b / (2 * a);
			r2 = -b / (2 * a);
            img = sqrt(-disc) / (2 * a);

            printf("Two distinct complex roots are: %.2f + i%.2f , %.2f - i%.2f", r1, img, r2, img);
		}
		break;
	}
	
	return 0;
}