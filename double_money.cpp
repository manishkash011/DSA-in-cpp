#include <iostream>
using namespace std;
int d_money(int n)
{
    if (n==1)
    {
        return 1;

    }
    

    return (2*d_money(n-1));
}
int main()
{
    int n;
    cout<<"Enter no. of days : "<<endl;
    cin>>n;
    return (d_money(n));
}