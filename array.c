#include<stdio.h>

void main ()
{
	
	
	int marks[7];
	

int i ;

for(i=1;i<7;i++)
{
	
	printf("Please enter the marks [%d]",i);
	
scanf("%d",&marks[i]);

}

printf("the arrays are as follows :\n");
for(i=1;i<7;i++)

{
	printf("Element [%d]=%d\n",i,marks[i]);
	}	

	


	
	
}