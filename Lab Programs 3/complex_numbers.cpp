//William Mwangi
//t00622533
//-------------
#include<iostream>
using namespace std;

class Complex{
public:
	//instance variables
	int i_coeficient, real;
	//Default Constructor
	Complex(){
		i_coeficient=0;
		real=0;
	}

	//Constructor
	Complex(int r, int c){
		i_coeficient=c;
		real=r;
	}

	//Show method
	void show(){
		cout<<"("<<real<<((i_coeficient>0)?"+":"")<<i_coeficient<<"i)";
	}
	//add_complex(method)
	Complex add_complex(Complex b){
		Complex c=Complex((this->real+b.real), (this->i_coeficient + b.i_coeficient));
		return c;
	}
};


int main()
{
	Complex i1=Complex(5, -9);
	Complex i2=Complex(-3, 7);

	i1.show();
	cout<<endl;
	i2.show();
	cout<<endl;

	Complex sum =i1.add_complex(i2);

	
	i1.show();
	cout<<" + ";
	i2.show();
	cout<<" = ";
	sum.show();
	cout<<endl;
	return 0;
}