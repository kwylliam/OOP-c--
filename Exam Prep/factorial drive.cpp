#include <iostream>
#include "factorial.h"
using namespace std;
int main()
{
cout<<"C++ header file"<<endl<<endl;
int positive_integer;
cout<<"Enter a positive integer: "<<endl;
cin>>positive_integer;
cout<<"The factorial of " << positive_integer << " is: " << factorial(positive_integer) <<endl;
return 0;
}