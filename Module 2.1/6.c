#include<stdio.h>  
                   
int main()                      
{ 
	// Days into Years
	int days, years;  
	printf("Enater Days :\n");
	scanf("%d",&days);
    years = days/365;   
    printf("Number of years is : %d \n",years);  
   
    // Years into Days
    int year;
    printf("\nEnter Years :\n");
	scanf("%d",&year);
	days = year*365;
	printf("Number of days is : %d",days);  
    
	return 0;  
}  