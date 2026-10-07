#include<bits/stdc++.h>
using namespace std;
void print2(int n){
    for(int i=0;i<n;i++){
         cout<<string((i),' ');
        
        for(int j=0;j<2*(n-i)-1;j++){
           
            cout<<"*";

        }
        cout<<endl;
    }
}
int main(){
    int m;
    cin>>m;
    print2(m);
}