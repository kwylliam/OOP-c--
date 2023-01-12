#include<fstream>
#include <iostream>
#include<map>
#include"add.h"
using namespace std;

class Employee{
public:

	//instance variables
	string f_name, l_name, id, age;
	map<string, string> e;

	//constructor
	Employee(){
		f_name=" ";
		l_name=" ";
		id=" ";
		age=" ";
	}

	Employee(string id,string fname, string lname, string age ){

		this->f_name=fname;
		this->l_name=lname;
		this->id=id;
		this->age=age;
		e[id]=this->f_name+this->l_name;
	}

	

	//search method. Searches for an id in a data file
	bool search(string id){
		map<string, string>::iterator i;
		for(i=e.begin(); i!=e.end(); i++){
			if(i->first==id){
				cout<<"Employee Found"<<endl;
				return true;
			}
		}
		return false;
	}

	//Display employee by id

	bool display(){
		map<string, string>::iterator i;
		for(i=e.begin(); i!=e.end(); i++){
			if(i->first==id){
				cout<<"Employee ID:"<<i->first<<endl<<"Name:"<<i->second<<endl;
				return true;
			}
		}

		cout<<"Employee not found";
		return false;

	}

	//Update method
	bool update(string id){
		if (!search(id)){
			cout<<"Employee not found";
			return false;
		}

		map<string, string>::iterator i;
		for(i=e.begin(); i!=e.end(); i++){
			if(i->first==id){
				break;
			}
		}

		int option=0;
		cout<<"What do you want to change? Enter 1 for first name,2 for second name, and 3 for age"<<endl;

		cin>>option;
		string name;
		int age;

		if(option==1){
			cout<<"Enter the new first name"<<endl;
			cin>>name;
			e[i->first]=name;		

		}

	}

	//delete
	bool remove(string id){
		if (!search(id)){
			cout<<"Employee not found";
			return false;
		}
		map<string, string>::iterator i;

		for(i=e.begin(); i!=e.end(); i++){
			if(i->first==id){
				e.erase(i);
				return true;
			}
		}
		return false;
	}


	//exit function
	void quit(){
		char c;
		cout<<"Are you sure you want to exit";
		cin>>c;

		if(c=='y'||c=='Y'){
			exit(0);
		}

	}



};


int main(){
	int choice;
	Employee emp=Employee();
	add();
	cout<<"Choose one of the following options:\n1. Print all employee’s information\n2. Add employee’s Information\n3. Find the employee’s \n4. Search an employee\n5. Delete a new employee\n6.Sort Employee’s ID\n";
	cin>>choice;

	switch(choice){
		case 1:{ 
			emp.display();
		}
		case 2:{
			string id, fname, lname, age;
			cout<<"Enter id"<<endl;
			cin>>id;

			cout<<"Enter first name"<<endl;
			cin>>fname;

			cout<<"Enter last name"<<endl;
			cin>>lname;

			cout<<"Enter age"<<endl;
			cin>>age;

			Employee emp=Employee(id,fname,lname, age);
			break;
		}
		case 3:{
			string id;
			cout<<"enter id";
			cin>>id;
			emp.search(id);
		}
		case 4:{
			string id;
			cout<<"enter id";
			cin>>id;
			emp.search(id);
		}
		case 5:{
			string id;
			cout<<"enter id";
			cin>>id;
			emp.remove(id);
		}
	}


	return 0;
}