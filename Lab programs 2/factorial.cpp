#include<iostream>
using namespace std;

int factorial(int x){
	int ans=1;
	for(int i=x; i>0; i--){
		if(i!=1){
			cout<<i<<" x ";
		}
		else{
			cout<<i<<" = ";
		}

		ans*=i;
	}

	return ans;
}

int main(){
	int y;
	cout<<"enter an integer ";
	cin>>y;

	cout<<y<<"!="<<factorial(y);

	return 0;
}