#include<iostream>
#include<cstring>
using namespace std;

//max of three numbers
double max(double a, double b, double c){
	double m=0;

	double arr[]={a, b, c};

	for(double i:arr){
		if (m<i){
			m=i;
		}
	}

	return m; 
}

string max(string s1, string s2, string s3){

	if(s1.length()<s2.length()){
		if(s2.length()<s3.length()){
			return s3;
		}
		else{
			return s2;
		}
	}
	else if(s1.length()<s3.length()){
		return s3;
	}
	else{
		return s1;
	}
}

int main(){

	double a=0, b=0, c=0;

	cout<<"Enter 3 numbers separated by a space";

	cin>>a>>b>>c;

	cout<<"The maximum value that you entered was : "<<max(a, b, c)<<endl;


	string st1, st2, st3;

	for(int i=0;i<3; i++){
		
		cout<<endl<<"Enter a string "<<endl;
		if (i==0){
			getline(cin,st1);
		}
		if(i==1){
			getline(cin,st2);
		}
		if(i==2){
			getline(cin,st3);
		}
	}

	cout<<"Your longest string was: "<<max(st1, st2, st3);

	return 0;
}
