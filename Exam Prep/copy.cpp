#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	char c;
	ifstream a;
	ofstream b;
	a.open("text.txt", ios::in);
	b.open("test.txt", ios::out);

	while(a.get(c)){

		b.put(c);
	}


	return 0;
}