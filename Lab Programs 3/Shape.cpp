//William Mwangi
//t00622533
//-------------
#include<iostream>
using namespace std;
class Shape{
	
public:
	//Instance Variables
	//------------------

	double width, height;
//Default Constuctor
	Shape(){
		width=1;
		height=1;
	}

	//Parametrized Constructor
	Shape(double w, double h){
		width=w;
		height=h;
	}
};

class Triangle: public Shape{
public:
	//Constructor
	Triangle(double w, double h){
		width=w;
		height=h;
	}
	//Area method
	double area(){
		double a=(0.5)*(this->width)*(this->height);
		cout<<endl<<"Calling area from triangle class\n"<<endl;
		return a;
	}
};

class Rectangle: public Shape{
public:
	//Constructor
	Rectangle(double w, double h){
		width=w;
		height=h;
	}
	//Area method
	double area(){
		double a=(this->width)*(this->height);
		cout<<endl<<"Calling area from rectangle class\n"<<endl;
		return a;
	}
};

int main()
{
	Triangle t=Triangle(4,5);

	Rectangle r= Rectangle(4,5);

	cout<<"The area of the triangle of width 4, and height 5 ="<<t.area()<<endl;

	cout<<"The area of the (4x5) rectangle ="<<r.area()<<endl;
	return 0;
}