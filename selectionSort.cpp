#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = size(arr);

    for (int i = 0; i < n-1; i++)
    {
        int smallIdx = i;
        for (int j = i+1; j<n; j++)
        {
            if (arr[j] < arr[smallIdx])
            {
                smallIdx = j;
            }
        }
        swap(arr[i],arr[smallIdx]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}