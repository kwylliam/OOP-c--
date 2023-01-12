#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

string reverse(string x){
	int length=x.length();
	char result[length+1];
	int i=length-1, j=0;

	while(j<length){
		result[j]=x[i];
		i--;
		j++;
	}

	result[length]='\0';

	return result;
}

int main(){

	string s;
	cout<<"Enter a sentence: ";

	getline(cin,s);

	cout<<reverse(s);
	return 0;
}
