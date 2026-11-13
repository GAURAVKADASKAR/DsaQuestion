#include<iostream>
using namespace std;

int main()
{
    int arr1[] = {1,3,5};
    int arr2[] = {2,4,6,8};
    int i = 0;
    int j = 0;
    int k = 0;
    int result[size(arr1)+size(arr2)];
    while(i<size(arr1) && j<size(arr2))
    {
        if(arr1[i]<arr2[j])
        {
            result[k++] = arr1[i];
            i++;
        }
        else{
            result[k++] = arr2[j];
            j++;
        }
    }
    while(i<size(arr1))
    {
        result[k++]=arr1[i];
        i++;
    }
    while(j<size(arr2))
    {
        result[k++]=arr2[j];
        j++;
    }

    for(int i=0; i<k; i++)
    {
        cout<<result[i]<<" ";
    }
}