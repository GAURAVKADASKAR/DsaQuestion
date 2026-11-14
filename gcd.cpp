#include<iostream>
using namespace std;

int greatestCommanFactor(int a, int b)
{
   int gcd;
   for(int i=1; i<=a && i<=b; i++)
   {
    if(a%i==0 && b%i==0)
    {
        gcd = i;
    }
   }
   return gcd;
}

int main()
{
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    int gcd = greatestCommanFactor(a,b);

    int lcm = a*b/(gcd);
    cout<<lcm;
   
}