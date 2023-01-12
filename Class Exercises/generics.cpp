#include<iostream>
using namespace std;
template <class T,class B>


void addnumber(T a, B b){
	cout<<a+b<<endl;
}

int main(){

	addnumber(5, 7);

	addnumber(5, 8.9);

	addnumber(90.8, 80);

	return 0;
}