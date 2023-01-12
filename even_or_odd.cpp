#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a integer";
	cin>>n;

	cout<<n<<(n%2==0? " is even": " is odd");

	return 0;
}