/***C program to convert days to years weeks and days***/
#include <stdio.h>
int main()
{
	int total,days=0,weeks=0,years=0;
	printf("Enter days:\n");
	scanf("%d",&total);
	years = total/365;  //number of years 
	total = total%365;  //remain days less than a year
	weeks = total/7;    //number of weeks in the remain days
	total = total%7;	//remain days less than a week
	days = total;
	
	/***another solution using while loop***/
	/*while(days>=365)
	{
		years++;
		days -= 365;
	}
	while(days>=7)
	{
		weeks++;
		days -=7;
	}*/
	
	printf("%d year/s, %d week/s and %d day/s\n",years,weeks,days);
	return 0;
}