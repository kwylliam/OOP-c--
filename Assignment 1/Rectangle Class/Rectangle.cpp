//William Mwangi
//t00622533
//-------------
#include<iostream>
using namespace std;
class Rectangle
{
//Instance variables//
//------------------//
float length, width;
public:
	//Construcor
	//-----------
	Rectangle(){
		length=0.0;
		width=0.0;
	};

	//Functions
	//----------

	void setlength( float l){
		length=l;
	}

	void setwidth(float w){
		width=w;
	}

	float perimeter(){

		return ((2*length)+(2*width));
	}

	float area(){
		return(length*width);
	}

	void show(){
		cout<<"Length ="<<length<<"\nWidth ="<<width<<endl;
	}

	int sameArea(Rectangle r){
		if(this->area()==r.area()){
			cout<< "\n\nBoth rectangles have the same area\n\n";
			return 1;
		}
		else{
			cout<<"\n\nThe rectangles have different areas\n\n";
			return 0;
		}
	}
	
};

int main(int argc, char const *argv[])
{
	Rectangle r1,r2;
	
	r1.setlength(20);
	r1.setwidth(8);
	cout<<"Rectangle 1\n-----------"<<endl;
	r1.show();
	cout<<"Perimeter ="<<r1.perimeter()<<endl;

	cout<<"Area ="<<r1.area()<<endl;

	cout<<"\n\nRectangle 2\n-----------"<<endl;

	r2.setlength(16);
	r2.setwidth(9);

	r2.show();

	r1.sameArea(r2);




	return 0;
}