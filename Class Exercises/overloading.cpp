#include<iostream>
#include<cmath>
using namespace std;


double area(double r){
	double a=M_PI*pow(r,2);
	return a;
}

double area(double length, double width){
	double a=length*width;
	return a;
}

float area(float s){
	float a=pow(s,2);
	return a;
}

int main()
{
	float s=5;
	cout<<"area of a cirlcle of radius 5 = "<<area(5.0)<<endl;

	cout<<"area of a 4*5 rectangle = "<<area(4, 5)<<endl;

	cout<<"area of a square with side 5 = "<<area(s)<<endl;
	
	return 0;
}