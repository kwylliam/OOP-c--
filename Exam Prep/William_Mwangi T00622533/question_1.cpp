#include <iostream>
#include<array>
using namespace std;

template <typename T, int N>

//print function
void print (T (&array) [N]) 
{ 
	for (int i = 0; i < N ; i++) 
		{ 
			cout << array [i] << " "; 
		}
		cout << endl; 
} 

int main(){

	int array1 []={5,6,7,8,9};

	double array2[]={5.6,7.8,9.9};

	print(array1);

	print(array2);

	return 0;
}