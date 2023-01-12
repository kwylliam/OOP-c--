#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main(){
	fstream test;
	test.open("test.txt", ios::in);
	int count=0;

	while(!test.eof()){
		string t;
		test>>t;
		count++;
	}

	test.close();

	cout<<"The file has "<<count<<" words"<<endl;

	
	test.open("text.txt", ios::out);

	for(int i=1; i<=100; i++){
		(i==1)?(test<<i):test<<", "<<i;
	}

	test.close();



	return 0;
}

