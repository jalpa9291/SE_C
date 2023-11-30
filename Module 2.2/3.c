#include <stdio.h>

int main()
{
	// Find even-odd using Ternary operator
    int n;  
  
    printf("Enter integer number : ");  
    scanf("%d", &n);  

	(n % 2 == 0 ) ? printf("\n%d is an Even Number",n) : printf("\n%d is an Odd Number",n);

    return 0; 
}
