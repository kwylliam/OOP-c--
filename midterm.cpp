#include<iostream>
#include<cstring>
using namespace std;
class Cstring{
	public:
		string str;

		Cstring(){
			str="";
		}

		Cstring(string s){
			str=s;
		}

	//Overload +

	Cstring operator +(const Cstring& rhs){
        Cstring s;
        s.str=str+rhs.str;      
        return s.str;
    } 

    //overload ==
    int operator ==(const Cstring&rhs){
    	int i;

    	if (str==rhs.str){
    		i=0;
    	}
    	else{
    		i=1;
    	}

    	return i;

    } 

};
int main(int argc, char const *argv[])
{
	string str1,str2;

	cout<<"Enter the first string";
	cin>>str1;

	cout<<"Enter the second string";
	cin>>str2;

	Cstring s1=Cstring(str1);
	Cstring s2=Cstring(str2);

	cout<<endl<<"First string is: "<<s1.str<<endl;
	cout<<endl<<"Second string is: "<<s2.str<<endl;

	cout<<endl<<"Concatenated string is: "<<(s1+s2).str<<endl;

	int j=(s1==s2);

	cout<<endl<<(j==0 ? "Both strings are equal":"Both strings are not equal");



	
	return 0;
}