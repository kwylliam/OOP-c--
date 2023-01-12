#include<iostream>
#include<string>
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

bool isPalindrome(string s){
	string rev=reverse(s);

	if(s==rev){
		cout<<s<<" is a palindrome"<<endl;
		return true;
	}

	else{
		cout<<s<<" is not a plaindrome"<<endl;
		return false;
	}

}
int main(){

	string n="121";
	string m="502";

	isPalindrome(n);
	isPalindrome(m);

	return 0;
}