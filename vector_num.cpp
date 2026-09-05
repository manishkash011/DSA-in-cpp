#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> num;
    int value;
    for (int i=0;i<10;i++){
        cout<<"Enter value  "<<i+1<<"   "<<endl;
        cin>>value;
        num.push_back(value);

    }
    
    cout<<"the values in num are  "<<" "<<endl;
    for (int i=0;i<10;i++){
        cout<<num[i]<<" "<<endl;

    }
    return 0;
}