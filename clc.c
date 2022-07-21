#include<stdio.h>

void main()
{
	
	int choice;
	int a,b;
	
	
	printf("Enter value of A And b");
	scanf("%d%d",&a,&b);
	
	printf("Enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1: printf("Addition of the number is %d",a+b);
                  break;
				  
 case 2 : printf("Subtraction  of the number is %d",a-b);
                  break;
				  
				  
case 3: printf("Multiplication  of the number is %d",a*b);
                  break;
				  
				  
			case 4:	  printf("Division  of the number is %d",a/b);
                  break;	
                  
                  default: printf("INvalid choice");
		break;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
}