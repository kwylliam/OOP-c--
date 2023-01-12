#include <iostream> 
using namespace std; 

// Definition of a template function 
template < typename T1, typename T2> 
auto smaller (T1 first, T2 second) //-> decltype(first < second ? first: second)
{ 
return first < second ? first: second;  

} 

int main ( ) 
{
cout << "Smaller of 12 and 15: " << smaller(12.6, 15) << endl; 
return 0;
}