#include <stdio.h> 
  
int main() 
{ 
    //Simple interest   
    float principle, time, rate, SI;

    printf("Enter principle amount: ");
    scanf("%f", &principle);
	printf("Enter interest rate: ");
    scanf("%f", &rate);
	printf("Enter number of year: ");
    scanf("%f", &time);

    SI = (principle * rate * time ) / 100;

    printf("Simple Interest = %f", SI);

    return 0;
}
 