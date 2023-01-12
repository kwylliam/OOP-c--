#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double n;
	cout<<"Enter a number";
	cin>>n;

	cout<<n<<(n>0 ? " is positive": "is negative");

	return 0;
}