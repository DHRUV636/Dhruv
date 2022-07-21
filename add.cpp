#include<iostream>

using namespace std;

int main ()
{
	int a,b;
	int choice;
	cout<<" Please Enterthe value of A :";
	cin>>a;
	
	cout<<"Please enter the value for B : ";
	cin>>b;
	
	cout<<"\n A="<<a;
	cout<<"\t B="<<b;
	
	cout<<"\n Lets do some arithmectic calculations";
	
	cout<<"\nPlease enter your choice for the calculations";
	cin>>choice;
	
	switch(choice)
{
	
 case 1: 	cout<<"\nAddition of the number is "<<a+b;
                 break;
 case 2:	cout<<"\n  Multiplication of the number is "<<a*b;
                      break;
 case 3:	cout<<"\n Subtraction of the nuber is "<<a-b;
                break;
 case 4:	cout<<"\n divsion of the number is "<<a/(float)b;
    break;

	
}
	
	
	cout<<"\n Thank YOU";
	
	
	
	
}