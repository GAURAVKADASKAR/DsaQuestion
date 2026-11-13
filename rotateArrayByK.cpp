#include<iostream>
#include<algorithm>
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
    int k;
    cout<<"Enter the Rotation : ";
    cin>>k;
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
