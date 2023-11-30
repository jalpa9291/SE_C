#include<stdio.h>

int main()
{
    int arr[10];
    int i, even=0, odd=0, sum_even=0, sum_odd=0;

    printf("Enter 10 Numbers: \n");

    for (i = 0; i <10 ; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] %2 == 0)
        {
            even++;
            sum_even += arr[i];
        }
        else
        {
            odd++;
            sum_odd += arr[i];
        }
    }
      
	  printf("\nTotal Even Numbers Are: %d\n", even);
      printf("Total Odd Numbers Are: %d\n", odd);
      printf("Sum Of Even Numbers Is: %d\n", sum_even);
	  printf("Sum Of Odd Numbers Is: %d\n", sum_odd);
      
      
      
    return 0;
    
}