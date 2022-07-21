#include<stdio.h>

void main ()

{

int a,b;	
int choice;
printf("--------------Choice calculator----------------------");

printf("\nPlease enter the value for a ");
scanf("%d",&a);	

printf("Please enter the value for b");
scanf("%d",&b);


printf("1. Addition \n2.Subtraction \n 3.Multiplication \n4.Division");

printf("\nPlease enter your choice");
scanf("%d",&choice);
	
	
	switch (choice)
	{
		
		case 1: printf("Addition of the number is %d",a+b);
		               
		                break;
		
		case 2: printf("Subtraction  of the number is %d",a-b);
		               
		                break;
		
		case 3: printf("Multiplication of the number is %d",a*b);
		               
		                break;
		                
		                
		                case 4: printf("division of the number is %d",a/b);
		               
		                break;
		
		                
		                
		                
		                
		
		
		
		
		
		
		
		
		
	}
	
	
}