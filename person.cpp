#include<iostream>
using namespace std;

//person clas
//___________//

class Person
{
	//Instance Variables//
	//------------------//
	string name;
	int age;

public:
	//default constructor//
	Person();

	//parametrized constructor//
	Person(string name, int age);

	//Methods//
	//-------//

	void getname(){
		cout<<name;
	}
};

/*
//student subclass//
//----------------//
class Student:public Person
{
	//instance varibles//
	//-----------------//
	string school;
public:
	Student();
	Student(string name, int age, string school);	
};*/

int main()
{
	Person p;
	return 0;
}



