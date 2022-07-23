/*
 *Write a C program to input week number(1-7) 
 *and print day of week name using switch case.
 */
 
#include <stdio.h>
int main(){
	
	int day;
	printf("Enter day of week number(1-7): ");
	scanf("%d",&day);
	
	switch(day){
		
		case 1:
			printf("Saturday");
			break;
		case 2: 
			printf("Sunday");
            break;
        case 3: 
            printf("Monday");
            break;
        case 4: 
			printf("Tuesday");
            break;
        case 5: 
			printf("Wednesday");           
            break;
        case 6: 
			printf("Thursday");
            break;
        case 7: 
            printf("Friday");
            break;
		default:
			printf("Invalid Day Number!!!");
			break;
	}
	
	return 0;
}