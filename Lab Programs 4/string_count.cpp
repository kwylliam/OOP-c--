#include<iostream>
#include<cstring>
using namespace std;

int main(){

	string s;
	int length, word_count=0;
	cout<<"Enter a sentence:	";

	getline(cin,s);
	length=s.length();

	for(int i=0; i<length; i++){
		if(s[i]==' '){
			word_count++;
		}
	}

	word_count++; //add one to because there is no space at the end to indicate the last word.

	cout<<"The string you entered was :\n\n"<<s<<"\n\n"<<"The word count is: "<<word_count;


	return 0;
}