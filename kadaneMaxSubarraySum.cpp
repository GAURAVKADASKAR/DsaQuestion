#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxSum = 0;
    int currentSum = 0;
    for(int i=0; i<n; i++)
    {
        currentSum += arr[i];
        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        if(currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout<<maxSum;
}


// [-2, 1, -3, 4, -1, 2, 1, -5, 4] 