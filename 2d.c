#include<stdio.h>


void main ()
{
	
	;
	
	int m1[3][3] ,m2[3][3],m3[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	
		
		for(j=0;j<3;j++)
		{
			printf("Enter matrix 1 [%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
			
		
	}
		
		for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			printf("Element [%d][%d]:",i,j,m1[i][j]);
			scanf("%d",&m2[i][i]);
			
		}
		
	printf("\n");	
		
		
	}
		for(j=0;j<3;j++)
		{
			printf("Enter matrix 2  [%d][%d]:",i,j,m2[3][3]);
			scanf("%d",&m2[3][3]);
			
		
	}
	
		
	printf("\n");	
		
		
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			m3[3][3]=m1[3][3]+m2[3][3];
			printf("Element [%d][%d]:",i,j,m3[i][j]);
			scanf("%d",&m3[i][i]);
			
		}
		
	printf("\n");	
		
		
	}

}




	
	
	
	
	
	
