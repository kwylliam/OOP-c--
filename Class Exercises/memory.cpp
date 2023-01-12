#include<iostream>
using namespace std;

int main(){
	int n;
	float* p; 
	cout<<"Enter the number of students";
	cin>>n;

	p=new float[n];

	for(int i=0; i<n; i++){
		cout<<"Enter the GPAs";
		cin>>p[i];
	}
	cout<<endl;

	for(int i=0;i<n; i++){
		cout<<p[i]<<", ";
		
	}

	delete p;



	return 0;
}
