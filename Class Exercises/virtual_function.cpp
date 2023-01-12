#include<iostream>
using namespace std;
class base{
public:
	virtual void show(){
		cout<<"printing from base class\n";
	}
};

class derived : public base{

public: 

	void show(){
		cout<<"printing from child class\n";
	}
};

int main()
{
	base *bptr;
	derived d;
	bptr=&d;
	//base *bptr;

	bptr->show();
	//derived ptr;

	
	return 0;
}