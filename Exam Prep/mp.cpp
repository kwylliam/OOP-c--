#include <map>
#include<iostream>
using namespace std;
int main()
{   map<int,string> name;
name[6]="abc";
name[7]="lmn";
name[8]="axyzbc";
 //cout<<name[8]<<endl;
name.erase(6);    


 map<int,string>::iterator lt=name.begin();

    for(lt;lt!= name.end();lt++){
    cout<<lt->first<<":"<<lt->second<<endl;
 }

 //name.erase(6);    

 return 0;
}
