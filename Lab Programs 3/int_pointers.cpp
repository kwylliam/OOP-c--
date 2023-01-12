#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int *ptrA, *ptrB;

	cout<<"Enter the first integer: ";
	cin>>a;
	cout<<endl<<"Enter the second integer: ";
	cin>>b;

	ptrA=&a;
	ptrB=&b;

	cout<<endl<<"ptrA ="<<ptrA<<endl<<"ptrB ="<<ptrB;



	return 0;
}