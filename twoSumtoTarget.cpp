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

    int target;
    cout<<"Enter the target value : ";
    cin>>target;

    int left = 0;
    int right = n-1;
    while (left<right)
    {
       if((arr[left]+arr[right]) == target)
       {
        cout<<left<<" and "<<right;
        return 0;
       }

       else if((arr[left]+arr[right]) > target)
       {
        right--;
       }
       else if((arr[left]+arr[right]) < target)
       {
        left++;
       }
    }
     

}