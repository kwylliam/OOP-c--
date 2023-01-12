#include<iostream>
using namespace std;
template<typename T>
class value {
    T height; 
    public: 
     void setdata(T x )
{
    height=x;
}
        T getdata()
{
    return height;
}
};
int main()
{
     
      value<int> obj1;
      obj1.setdata(5);
      cout<<" output"<< obj1.getdata();
      
      value<double> obj2;
      obj2.setdata(5.33);
      cout<<" output"<< obj2.getdata();

   
      return 0;
}