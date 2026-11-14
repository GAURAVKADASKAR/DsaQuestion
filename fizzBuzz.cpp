#include<iostream>
using namespace std;


int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    for(int i=1; i<=num; i++)
    {
    
        if(i%3==0 && i%5==0) cout<<i<<" : FizzBuzz"<<endl;

        else if(i%3==0) cout<<i<<" : Fizz"<<endl;

        else if(i%5==0) cout<<i<<" : Buzz"<<endl;
    
        else cout<<i<<endl;
    }
    
}