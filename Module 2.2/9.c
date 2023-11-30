#include<stdio.h>  

int main()    
{    

	int i,no,factorial=1;    
	
	printf("**Factorial Number**\n");
 	printf("Enter a number: ");   
  	scanf("%d",&no);  

    for(i=1;i<=no;i++)
    {    
      factorial=factorial*i;    
    }    

  	printf("Factorial of %d is: %d",no,factorial);    

	return 0;  

}   