#include<bits/stdc++.h>
using namespace std;
void print9(int n){
    for(int i=0;i<n;i++){
         cout<<string((n-i-1),' ');
        
        for(int j=1;j<=2*i+1;j++){
           
            cout<<"*";

        }
        cout<<endl;
    }
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
    print9(m);
}