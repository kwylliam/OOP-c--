#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5};

	int sum=0;
	int size=*(&arr+1)-arr;

	for(int i=0; i<size; i++){
		sum+=arr[i];
	}

	float avg=sum/size;

	cout<<"Sum of the array = "<<sum<<endl;

	cout<<"Average Value = "<<avg<<endl;



	return 0;
}
