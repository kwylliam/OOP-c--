#include<iostream>
using namespace std;

void primes(int a, int b){
	for(int i=a; i<=b; i++){
		int j=2;
		while(j<i && i%j!=0 ){
			j++;
		}
		if(j==i){
			cout<<j<<", ";
		}
	}
	cout<<endl;
}
int main(){
	primes(1,100);
	return 0;
}
