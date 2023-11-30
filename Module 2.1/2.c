#include<stdio.h>

main()
{
	// Calculator
	int num1,num2;

	printf("Enter number 1 \n");
	scanf("%d",&num1);
	printf("Enter number 2 \n");
	scanf("%d",&num2);

	printf("Addition 	: %d \n",num1+num2);
	printf("Substraction 	: %d \n",num1-num2);
	printf("Multipication 	: %d \n",num1*num2);
	printf("Division 	: %d \n",num1/num2);
	printf("Modulo 		: %d \n",num1%num2);
}