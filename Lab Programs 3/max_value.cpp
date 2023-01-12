//William Mwangi
//t00622533
//-------------
#include<iostream>
using namespace std;

int main(){

  int n, i,max=0;
  cout<<"Enter number of values:";
  cin>>n;

  
  int arr[n];
  for(i=0;i<n;i++) {
    cout<<"Enter an integer \n";
    cin>>arr[i];
  }

  cout<<"The array you have created is [";

  for(int i: arr){
    cout<<i<<", ";
  }
  cout<<"]"<<endl;


  for(int j=0;j<n; j++){
   if (arr[j]>max){
     max=arr[j];
   }
  }
  

  int *p= &max;


  cout<<"Max value = "<<*p;

  return 0;
}