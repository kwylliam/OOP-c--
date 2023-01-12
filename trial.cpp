#include<iostream>
using namespace std;

class trial{
	static string name;
	int id;

public:
	trial();
	trial(string name, int id);

string getName(){
	return name;
}

friend void change(){
	string n;
	cout<<"Enter new name";
	cin>>n;
	name=n;
}
};
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}
