#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	double r,a;
	cout<<"Enter the radius";
	cin>>r;

	a=M_PI*pow(r,2);

	cout<<"Area = "<<a;


	return 0;
}