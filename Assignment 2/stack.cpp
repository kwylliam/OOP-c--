/*William Kamau M.
T00622533
---------------*/
#include<iostream>
#include <vector>
using namespace std;

template<class T>

class Stack{
public:
	vector<T> stack;

	//push method
	T push(T item){

		stack.insert(stack.begin(),item);
		cout<<"Added "<<item<<endl;
		return item;
	}

	T pop(){
		if (stack.empty()){
			cout<<"nothing to pop here";
			T i;
			return (i);
		}
		else{
			T item=stack.front();
			stack.erase(stack.begin());
			return item;
		}
	}

	T peek(){
		if (stack.empty()){
			cout<<"nothing to pop here";
			T i;
			return i;
		}
		else{
			T item=stack.front();
			return item;

		}

	}

	void display(){
		cout<<"\n\nDisplay Stack: \n\n";
		for(T i: stack){
			cout<<i<<", ";
		}
		cout<<endl<<endl;
	}

};
int main(){
	Stack<int> s;

	//array of values to add to the Stack

	int arr[]={6,3,8,1,5,7,9,0,2,4};

	for(int i: arr){
		s.push(i);
	}


	s.display();

	cout<<"test pop by poping top 3 elements\n\n";

	for(int i=0; i<3;i++){
		s.pop();
	}

	s.display();

	cout<<"view the new top element using peek\n\n";

	cout<<"The top element is "<<s.peek()<<endl;




	return 0;
}