#include<iostream>
using namespace std;


int reverseNumber(int num)
{
    int rev=0;
    while(num > 0)
    {
        int tem = num%10;
        rev = rev*10+tem;
        num = num/10;
    }
    return rev;
}

int main()
{   
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num == reverseNumber(num))
    {
        cout<<"Yes";
    }
    else 
    {
        cout<<"No";
    }
    return 0;
}