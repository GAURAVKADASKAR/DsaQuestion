#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int count = 0;

    while(n>0)
    {
        if(n%2 == 1)
        {
            count++;
        }
        n = n/2;
    }

    cout<<count;
}
