#include <iostream>                      				
using namespace std; 					
class demo							
{								
int x, y, z;     						             
public:									
       void Getdata(int a, int b, int c)     		              
{ 							
     x=a;								
     y=b;										
     z=c;									
}								
void display();
void operator -();
};

void demo::display(){
     cout<<"x"<<x;
     cout<<"y"<<y;
     cout<<"z"<<z; 
     }
void demo:: operator -() {
     x=-x;
     y=-y;
     z=-z;
}

int main(){

     return 0;
}