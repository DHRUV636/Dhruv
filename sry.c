#include<stdio.h>

void main()
{
char name[10];


int rollno,total,s1,s2,s3,
  float per;

printf("Enter your name",name);
	scanf("%s",&name);
	
	printf("\n please enter your roll number",rollno);
	scanf("%d",&rollno);
	
	printf("\n Please enter your marks in accounts",s1);
	scanf("%d",&s1);
	
	printf("\nPlease enter your marks for statistics",s2);
	scanf("%d",s2);
	
	printf("\n Please enter your marks for Economics",s3);
	scanf("%d",&s3);
	
	total=s1+s2+s3;
	
	printf("\n The sum of the three subjects is %d",total);
	
	per=(total/300)*100;
	
	printf("\n The percantage occupied by the student is %f",per);
	
	
	
}