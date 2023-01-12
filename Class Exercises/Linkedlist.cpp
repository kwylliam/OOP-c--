#include<iostream>
using namespace std;
template<class T>

class Node  
{
	public:
		T data ;
		Node* next;
};
template<class U>
class LinkedList{

//instance variables
public:

	Node<U> head;
	int count;

	//Constructor
	LinkedList(){
		head=NULL;
	}

	//insert method
	int add(U entry){

		Node<U>* n=new Node<U>();
		n.data=entry;

		if (head==NULL){
			n->next=NULL;
			head=n;
		}

		else{
			n->next=head;
			count++;
			head=n;
		}
		return 0;
	}

	//Remove method
	int remove(int i){
		return 0;
	}
};

int main(){


	return 0;
}