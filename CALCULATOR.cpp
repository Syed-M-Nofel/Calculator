/*C++ program performs the functionality calculator for integers.*/
#include <iostream>
#include <math.h>
using namespace std;

int Addition();            //addition function
int Subtraction();         //Subtraction function
int Division();            //Division function
int Multiplication();      //Multiplication function
int power();               //power function
int absolute();            //absolute function
int factorial();           //factorial function

int main() 
{
	int a;
	cout<<" 1.Addition.\n 2.Subtraction.\n 3.Division.\n 4.Multiplication. \n 5.Power. \n 6.Absolute. \n 7.Factorial."<<endl; 
	cout<<endl;
	while(a!=10 )
	{
 cout<<"Which Operation you want to perform = ";
	cin>>a; 
		
	switch(a)
	{
		case 1:
			Addition();
			break;
		case 2:
			Subtraction();
			break;
		case 3:
			Division();
			break;	
		case 4:
			Multiplication();
			break;
		case 5:
			power();
			break;
		case 6:
			absolute();
			break;
		case 7:
			factorial();
			break;	
								
	}
	}
	return 0;
}

int Addition()
{
	int a,b,result;
	cout<<"Enter 1 value :"; cin>>a;
	cout<<"Enter 2 value :"; cin>>b; 
	result=a+b;
	cout<<"Result is :"<<result;
	return result;
}					
		int Subtraction()
		{
			int a,b,result;
			cout<<"Enter 1 value :"; cin>>a; 
			cout<<"Enter 2 value :"; cin>>b; 
			result=a-b;
			cout<<"Result is :"<<result;
			return result;
		}	
				
			int Division()
			{
				int a,b,result;
				cout<<"Enter 1 value :"; cin>>a;
				cout<<"Enter 2 value :"; cin>>b; 
				result=a/b;
				cout<<"Result is :"<<result;
				return result;
			}	
					int Multiplication()
						{
							int a,b,result;
							cout<<"Enter 1 value :"; cin>>a; 
							cout<<"Enter 2 value :"; cin>>b; 
							result=a*b;
							cout<<"Result is :"<<result;
							return result;
						}	
							
							int power()
								{
									int a,b,result;
									cout<<"Enter 1 value :"; cin>>a; 
									cout<<"Enter 2 value :"; cin>>b; 
									result=pow(a,b);
									cout<<"Result is :"<<result;
									return result;
								}
									int  absolute()
									{
										int a,result;
										cout<<"Enter value for absolute = "; cin>>a;
										result=abs(a);
										cout<<"Absolute value is :"<<result<<endl;
										return result;
									}
										int factorial()
										{
											int a,fact=1;
											cout<<"Enter value for factorial = "; cin>>a;
											for(int i=1;i<=a;i++)
											{
									
												fact=fact*i;
											}
											cout<<"Factorial of "<<a<<" is = "<<fact;
											
										}						
