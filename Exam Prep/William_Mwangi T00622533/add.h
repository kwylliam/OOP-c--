#include<fstream>
#include <iostream>
#include<map>
using namespace std;
void add(){
		fstream data;
		data.open("employee.txt", ios::in);
		string s, id, fname, lname, age;
		while(!data.eof()){
			data>>s;
			id=s;
			data>>s;
			fname=s;
			data>>s;
			lname=s;
			data>>s;
			age=s;

			//Employee(id, fname,lname, age);
		}

		data.close();

	}