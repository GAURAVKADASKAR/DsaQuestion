#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
   
    int prev = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[prev] != arr[i])
        {
            prev++;
            arr[prev] = arr[i];
        }
    }

    for(int i=0; i<=prev; i++)
    {
        cout<<arr[i]<<" ";
    }
}