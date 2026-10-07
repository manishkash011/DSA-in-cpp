#include<bits/stdc++.h>
using namespace std;
void print5(int n){
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"* ";

        }
        cout<<endl;
    }
}
int main(){
    int m;
    cin>>m;
    print5(m);
}