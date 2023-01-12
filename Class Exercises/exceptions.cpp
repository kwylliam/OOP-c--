#include<iostream>
#include<exception>
#include<string>
using namespace std;

class myexception : public exception{
	public: 
		const char* h(){
			return "C++ exeption";
		}
};

class exep :public exception{
public:
	const char* h(){
		return " string exeption";
	}
};

int main()
{
	int i;
	string str;
	cout<<"Enter your age"<<endl;
	cin>>i;
	string name;
	cout<<"Enter your age"<<endl;
	cin>>i;
	cout<<"Enter your initials (3 at most no spaces or periods)";
	getline(cin,name);
	try{
		

		if(i<7){
			throw(i);
		}

		else if(i==7){
			throw myexception();
		}
		
		else{
			cout<<"input recieved";
			}
		if (name.length()>3) throw name;
		if (name.find(".")!=string::npos) throw myexception();

	}

	catch(int i){
		cout<<"Your input was invalid\n";
		i=0;
	}
	catch(exep &e)
	{  
		cout<<e.h()<<endl;
		cout<<"Exception caught!,You entered 7";
	}

	catch(string name){
		cout<<"To many initials given";
	}
	catch(myexception &e){
		cout<<"You included periods";
	}

	return 0;
}
