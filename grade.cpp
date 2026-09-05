#include <iostream>
using namespace std;
int main(){
    cout<<"Enter marks"<<endl;
    int n;
    cin>>n;
    if (n>=90){
        cout<<"Grade A";
    }
        
    else if (n>=70){
        cout<<"Grade B";
    }
        
    else if (n>=50){
        cout<<"Grade C";
    }
        
    else if (n>=30){
        cout<<"Grade D";
    }
        
    else {
        cout<<"Fail";
    }
return 0;

}
