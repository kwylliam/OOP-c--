#include<iostream>
using namespace std;

class friend
string name;
int id;
{
public:
	friend();
	friend(name, id);

}
{
string getName(){
	return name;
}
friend void change(string new){
	this.name=new;
}

};