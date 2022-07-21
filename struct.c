 #include<stdio.h>
 
 struct Student
 {
 	
 int marks;
 char name[10];
 int rollno; 	
 	
 	
 	
 	
 };
 
 void main()
 {
 	
 struct Student s1;	
 printf("Please enter your name");
 scanf("%s",&s1.name);
 
 printf("Please eneter Students marks");
 scanf("%d",&s1.marks);
 
 printf("Please enter your roll no");
 scanf("%d",&s1.rollno);
 
 
 printf("\n-------------------Student details---------------------\n");
 	
 	printf("\n The name of the student is %s",s1.name);
 	printf("\n the rollno of the student is %d",s1.rollno);
 	printf("\n The marks of the student is %d",s1.marks);
 	
 	
 	
 }