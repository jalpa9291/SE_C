#include<stdio.h>    
#include<stdlib.h>  

int main()
{  
	int mat1[2][2], mat2[2][2], mul[2][2];    

	printf("							Matrix Multiplication					\n");
	printf("---------------------- Matrix : 1 --------------------\n");

	for(int i=0; i<2; i++)    
	{    
		for(int j=0; j<2; j++)    
		{    
			printf("Enter Elements : ");
			scanf("%d",&mat1[i][j]);    
		}		    
	}
	printf("\n\n%d   %d \n",mat1[0][0],mat1[0][1]);
	printf("%d   %d \n",mat1[1][0],mat1[1][1]);
			
	printf("\n--------------------- Matrix : 2 --------------------\n");

	for(int i=0; i<2; i++)    
	{    
		for(int j=0; j<2; j++)    
		{    
			printf("Enter Elements : ");
			scanf("%d",&mat2[i][j]);    
		}		    
	}		
	printf("\n\n%d   %d \n",mat2[0][0],mat2[0][1]);
	printf("%d   %d \n",mat2[1][0],mat2[1][1]);  
    
	printf("\n-------------Result : Multiplication Matrix----------------");    
	
	for(int i=0; i<2; i++)    
	{    
		for(int j=0; j<2; j++)    
		{    
			mul[i][j]=0;    
			for(int k=0; k<2; k++)    
			{    
				mul[i][j]+=mat1[i][k]*mat2[k][j];    
			}    
		}		    
	}	    
	printf("\n\n%d   %d \n",mul[0][0],mul[0][1]);
	printf("%d   %d \n",mul[1][0],mul[1][1]); 
	
	return 0;  
}  
