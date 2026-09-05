#include <iostream>
using namespace std;
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,0};
    int arr3[5]={0};
    for (int i=0; i<5; i++)
    arr3[i]={(arr1[i]+arr2[i])};
    for (int j=0; j<5; j++)
    cout<<arr3[j]<<"   ";

}

