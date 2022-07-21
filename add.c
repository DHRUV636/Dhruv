#include<stdio.h>

void main()

{
	
	
	int l,b,h;
	int area;
	
	printf("\nFinding the area of Square,Rectangle,Triangle");
	
	printf("\n Enter the value oF l");
	scanf("%d",&l);
	
	printf("\n Enter the value of breadth ");
	scanf("%d",&b);
	
	printf("\n Enter the value of height");
	scanf("%d",&h);
	
	
	
	//Area of triangle = 1/2 × b × h
	
//Area of rectangel=l*b

//Area of square= l*l
 printf ("\n Please enter your choice for the area ");
 scanf("%d",&area);

switch(area)
{
	
	case 1: printf("The area of rectangle is %d",l*b);
	
	          break;
	
	case 2 :printf("The area of square is %d",l*l);
	
	              break;
	              
	 case 3:printf("The area of triangle is %d",0.5*b*h)  ;
	 
	  break ;           
	
	
	
	
	
	
	
	
	
}




	
}