#include<iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}

int main(){

	int x,y;

	cout<< "enter the first integer ";
	cin>>x;

	cout<<endl<<"enter the second integer";
	cin>>y;

	cout<<endl<<"Sum: "<<x<<" + "<<y<<" = "<<sum(x,y);





	return 0;
}