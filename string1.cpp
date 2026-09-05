#include <iostream>
#include <string>
using namespace std;
int main(){
    string f_name;
    string l_name;
    string full_name="Manishkashyap";
    f_name={full_name,0,6};
    l_name=full_name.substr(6);
    // cout<<f_name<<endl;
    // full_name.insert(" ",6);
    f_name={full_name,0,6};
    // string nfull_name=f_name+" "+l_name;
    string full_name2=full_name.insert(6," ");
    cout<<full_name2<<endl;
    
}