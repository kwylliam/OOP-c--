#include<iostream>
using namespace std;

void swap(int a, int b){

	int c;
	c=a;
	a=b;
	b=c;
}

int main(int argc, char const *argv[])
{
	int x=5, y=7;

	swap(x, y);

	cout<<"x="<<x<<" y="<<y;

	return 0;
}
	
