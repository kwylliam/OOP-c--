#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<int,5> arr={1,2,3,4,5};

	for(int i:arr){
		cout<<i<<", ";
	}
	cout<<"\n"<<endl;

	int x=arr[0];

	arr[0]=arr.back();

	arr.back()=x;

	for(int i:arr){
		cout<<i<<", ";
	}

	cout<<endl;




	return 0;
}