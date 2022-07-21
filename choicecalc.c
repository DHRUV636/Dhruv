#include<stdio.h>

void main()
{
	
	int choice;
	int a,b;
	
	
	printf("----------------------Choice calculator --------------------------");
	
	printf("\n Enter the value of A");
	scanf("%d",&a);
	
	printf("\n Enter the value of B");
	scanf("%d",&b);
	
	printf("\n 1.Addition   \n 2.Subtraction \n 3.Multiplication  \n 4.division ");
	
	
	printf("\n Enter your choice");
	scanf("%d",&choice);
	
	
	if (choice== 1)
	{
		printf("\n The addition of the numbers is %d",a+b);
	}
	
	 if (choice== 2)
	{
		printf("\n Subtraction of the numbner is %d",a-b);
	}
	 if(choice== 3)
	{
	
	printf("\n Multiplication of the number is %d",a*b);
}

 if(choice== 4)
	{
	
	printf("\n division  of the number is %d",a/b);
}
}





