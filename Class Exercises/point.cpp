#include<iostream>
using namespace std;
class point 
{
    
public:
   int x, y;
   point (int x=0, int y=0){
      this->x=x;
      this->y=y;
   }


   point operator +(const point& rhs)   // p1 is calling operator and p2 is call const part 
{
        point p;
        p.x=x+rhs.x;      //first x from p1 and second x is  from this p2 
        p.y= y+ rhs.y;
       return p;
} 

point operator -(const point& rhs)   // p1 is calling operator and p2 is call const part 
{
        point p;
        p.x=x-rhs.x;      //first x from p1 and second x is  from this p2 
        p.y= y- rhs.y;
       return p;
} 

point operator *(const point& rhs)   // p1 is calling operator and p2 is call const part 
{
        point p;
        p.x=x*rhs.x;      //first x from p1 and second x is  from this p2 
        p.y= y* rhs.y;
       return p;
} 

   

void operator -();

};

void point :: operator -()
{
   x=-x;
   y=-y;
}


int main(){
   point p1(2,3), p2(6,7);

   point p3=p1+p2;

  point p4=(p1+p2)*(p3+p1);

  -p1;
  cout<<p1.x;


   return 0;
}