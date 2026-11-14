#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    if(n>0 && (n & (n-1)) == 0)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}