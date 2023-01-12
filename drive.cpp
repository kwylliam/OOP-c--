#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[]="Hi, I am studying the string";

	char *ptr;

	int i=0;

	while (i<str.size()){
		ptr=strtok(str[i], "");
		cout<<ptr<<endl;

	}

	
	cout<<ptr<<endl;

	ptr=strtok(NULL, "");

	cout<<ptr<<endl;

	return 0;
}