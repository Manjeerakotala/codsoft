#include<iostream>
using namespace std;
int main()
{
	
	char op;
	int num1,num2;
	cout<<"Enter operator(+,-,*,/):\n";
	cin>>op;
	cout<<"Enter two operator\n";
	cin>>num1>>num2;
	switch(op)
	{
		case'+':
		cout<<"addition"<<num1+num2;
		break;
		case'-':
		cout<<"subtraction"<<num1-num2;
		break;
		case'*':
		cout<<"multiplication"<<num1*num2;
		break;
		case'/':
		cout<<"division"<<num1/num2;
		break;
		case'%':
		cout<<"modulo"<<num1%num2;
		break;
		default:
			cout<<op<<"is an invalid operator";
		
	}
	
}
