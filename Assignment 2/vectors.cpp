#include<iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v={100, 200, 300};
	vector<int>::iterator i;
	
 

	for(i=v.begin(); i!=v.end(); i++){
		if(*i==200){
			i++;
			break;
		}
	}

	i=v.insert(i, 500);

	for(i=v.begin(); i!=v.end(); i++){
		cout<<" "<<*i;
	}


			

	return 0;
}
