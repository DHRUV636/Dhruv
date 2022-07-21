#include<stdio.h>


void as()
{
	
	int x,y,z;
	
	printf("\n enter value of x");
	scanf("%d",&x);
	
	printf("\n enter value of y");
	scanf("%d",&y);
	
	printf("\n enter value of z");
	scanf("%d",&z);
	
	z=x;
	x=y;
	y=z;
	
	printf("\n the value of variable after swap is %d",x);
	printf("\n the value of variable after swap is %d",y);
printf("\n the value of variable after swap is %d",z);

}
void main()
{
	
	printf("Lets do aprogram for swapping the variables");
	as();
	
	
}