#include<iostream>
#include<array>
#include<cmath>
using namespace std;
int center(int s){
	int c=0;

	if(s%2!=0){
		c=ceil(s/2);
	}
	else{
		c=(s/2)+1;
	}
	return c;
}

int main()
{
	cout<<"For an array with an odd number of elements"<<endl;
	array<int,5> arr={1,2,3,4,5};
	array<int, 6>arr2={6,7,8,9,10,11};

	for(int i:arr){
		cout<<i<<", ";
	}
	cout<<endl;
	//find the size

	int c=center(arr.size());
	
	int i=0, j=arr.size()-1;
	while(i<c && j>=c){
		int k=arr[i];
		arr[i]=arr[j];
		arr[j]=k;
		i++;
		j--;
	}


	for(int i:arr){
		cout<<i<<", ";
	}

	cout<<endl<<"For an array with an even number of elements"<<endl;

	for(int i:arr2){
		cout<<i<<", ";
	}
	cout<<endl;

	c=center(arr2.size()); 

	int m=0, n=arr2.size()-1;
	while(m<c && n>=c){
		int k=arr2[m];
		arr2[m]=arr2[n];
		arr2[n]=k;
		m++;
		n--;
	}


	for(int i:arr2){
		cout<<i<<", ";
	}

	cout<<endl;

	return 0;
}