#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the Range : ";
    cin>>num;
    int count = 0;
    int first=0,second=1,next=0;
    while (count<num)
    {
        cout<<first<<" ";
        next = first+second;
        first = second;
        second = next;
        count++;
    }

}




//  0, 1, 1, 2, 3, 5, 8