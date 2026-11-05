#include<iostream>
using namespace std;


int main()
{   
    int num;
    bool isPrime=true;
    cout<<"Enter Number : ";
    cin>>num;
    if(num<2) return false;
    for(int i=2; i*i<=num; i++)
    {
        if (num%i==0)
        {
            isPrime = false;
            break;
        }
    }
    cout<<isPrime;
    return 0;
}