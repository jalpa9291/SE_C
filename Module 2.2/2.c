#include<stdio.h>

int main()
{
	// swap two number without third variable
	int a,b;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	
	printf("\nBefor swapping first=%d  second=%d\n",a,b);

	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping first=%d  second=%d\n",a,b);

	return 0;
	
}