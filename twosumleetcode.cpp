#include <iostream>
using namespace std;
int main(){
    int nums[5]={5,8,4,7,6};
    int target;
    cout<<"Enter target    ";
    cin>>target;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if (nums[i]+nums[j]==target )
            cout<<"The indexes are "<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
            

        }
        
        


    }
    

}
